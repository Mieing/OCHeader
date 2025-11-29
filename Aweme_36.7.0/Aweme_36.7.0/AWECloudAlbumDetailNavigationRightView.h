@class UIButton;
@protocol AWECloudAlbumDetailNavigationRightViewDelegate;

@interface AWECloudAlbumDetailNavigationRightView : UIView

@property (readonly, nonatomic) UIButton *selectButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIButton *moreButton;
@property (weak, nonatomic) id<AWECloudAlbumDetailNavigationRightViewDelegate> delegate;

+ (double)contentWidth;

- (void)showManageItem:(BOOL)a0 showMoreItem:(BOOL)a1 showCancelItem:(BOOL)a2;
- (void)selectAction;
- (void).cxx_destruct;
- (void)cancelAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)moreAction;

@end
