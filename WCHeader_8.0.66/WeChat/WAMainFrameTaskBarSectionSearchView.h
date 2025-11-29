@class WAMainFrameTaskBarSearchBar, UIView;
@protocol WAMainFrameTaskBarSectionSearchViewDelegate;

@interface WAMainFrameTaskBarSectionSearchView : WAMainFrameTaskBarSectionBaseView {
    UIView *_searchArea;
    WAMainFrameTaskBarSearchBar *_searchBar;
}

@property (weak, nonatomic) id<WAMainFrameTaskBarSectionSearchViewDelegate> delegate;

+ (long long)contentHeight;

- (void)initView;
- (void)onTapSearchArea;
- (void)layoutSubviews;
- (void)refreshSearchPlaceHolder:(id)a0;
- (void)onSearchPlaceHolderUpdate:(id)a0;
- (void).cxx_destruct;

@end
