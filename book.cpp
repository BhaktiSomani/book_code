class book{
	private: 
	 int bookid;
	 String bookname;
	 double price;
	public :
		book(){
			bookid=100;
			bookname="book1";
			price=200;
		}
		book(int bookid, String bookname,double price){
			this.bookid=bookid;
			this.bookname=bookname;
			this.price=price;
		}
		double calbill(int quan){
			return quan*price;
		}
};
