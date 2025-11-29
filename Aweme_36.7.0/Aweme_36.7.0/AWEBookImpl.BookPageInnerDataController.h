@interface AWEBookImpl.BookPageInnerDataController : AWEListDataController {
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ countAveragePull;
    void /* unknown type, empty encoding */ watchOffset;
    void /* unknown type, empty encoding */ bookOffset;
    void /* unknown type, empty encoding */ bookId;
    void /* unknown type, empty encoding */ itemID;
    void /* unknown type, empty encoding */ watchBookID;
    void /* unknown type, empty encoding */ itemIDSet;
    void /* unknown type, empty encoding */ _awemeList;
    void /* unknown type, empty encoding */ bookAwemeList;
}

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
