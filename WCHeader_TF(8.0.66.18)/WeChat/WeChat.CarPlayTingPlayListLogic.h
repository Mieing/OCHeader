@interface WeChat.CarPlayTingPlayListLogic : NSObject <TingPlayListListener> {
    void /* unknown type, empty encoding */ tapeItem;
    void /* unknown type, empty encoding */ playList;
    void /* unknown type, empty encoding */ firstPageItemCount;
    void /* unknown type, empty encoding */ normalPageItemCount;
    void /* unknown type, empty encoding */ isEmpty;
    void /* unknown type, empty encoding */ delegate;
}

- (void)onReloadItems:(id)a0;
- (void)onLoadMore:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
