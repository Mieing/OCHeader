@class UIImage, UIView;
@protocol BDPGameScreenshotPopupViewDelegate;

@interface BDPGameScreenshotPopupView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImage *screenshotImage;
@property (weak, nonatomic) id<BDPGameScreenshotPopupViewDelegate> delegate;

- (void)handleTapBlank:(id)a0;
- (void)handleTapContent:(id)a0;
- (void)showFromParentView:(id)a0 isLandscape:(BOOL)a1;
- (void)updateContentViewLayout:(BOOL)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
