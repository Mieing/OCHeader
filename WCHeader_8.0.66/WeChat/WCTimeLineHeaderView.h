@class UIImageView, MMActivityIndicator;

@interface WCTimeLineHeaderView : EGORefreshTableHeaderView {
    MMActivityIndicator *m_reflashImageView;
    UIImageView *m_tipBkg;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_loadForAccessbility;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)egoRefreshScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
