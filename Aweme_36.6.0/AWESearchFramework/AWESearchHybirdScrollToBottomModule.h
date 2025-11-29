@class UIButton;

@interface AWESearchHybirdScrollToBottomModule : AWESearchResultHybridBaseContainerModules

@property (retain, nonatomic) UIButton *scrollToBottomButton;

+ (id)moduleName;

- (void)setupUI:(id)a0;
- (void)scrollToBottomButtonClick;
- (void)showScrollToBottomButtonIfNeeded;
- (id)resultPageServiceManager;
- (void)handleContentSizeDidChange:(id)a0 object:(id)a1;
- (void)handleContentOffsetDidChange:(id)a0 object:(id)a1;
- (void)themeDIdChange;
- (void).cxx_destruct;

@end
