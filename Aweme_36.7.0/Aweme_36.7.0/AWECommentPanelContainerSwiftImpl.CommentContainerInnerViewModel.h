@protocol AWECommentTabManagerProtocol;

@interface AWECommentPanelContainerSwiftImpl.CommentContainerInnerViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel <AWECommentTabManagerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerViewModel;
    void /* unknown type, empty encoding */ commentCountLabelText;
    void /* unknown type, empty encoding */ tabbarTypes;
    void /* unknown type, empty encoding */ canShowCommentManagerRedPoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentViewModel;
}

@property (nonatomic, retain) id<AWECommentTabManagerProtocol> tabManager;

- (void)fetchListData;
- (void)reloadContentViewModel;
- (long long)indexForTabbarType:(unsigned long long)a0;
- (id)createTabContext;
- (void)updateTabContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)currentContext;

@end
