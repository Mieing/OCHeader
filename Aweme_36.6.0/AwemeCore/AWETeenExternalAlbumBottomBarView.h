@class AWETeenExternalAlbumTitleView, UIView;
@protocol AWETeenExternalAlbumBottomBarViewDelegate;

@interface AWETeenExternalAlbumBottomBarView : UIView

@property (weak, nonatomic) id<AWETeenExternalAlbumBottomBarViewDelegate> delegate;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) AWETeenExternalAlbumTitleView *titleView;

- (void)updateWithAwemeModel:(id)a0;
- (void)bottomBarDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setupUI;

@end
