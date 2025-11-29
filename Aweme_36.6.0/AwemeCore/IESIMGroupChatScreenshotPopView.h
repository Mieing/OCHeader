@class UIImage, UIView;
@protocol groupChatScreenshotPopViewDelegate;

@interface IESIMGroupChatScreenshotPopView : UIView

@property (retain, nonatomic) UIImage *screenShotImage;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<groupChatScreenshotPopViewDelegate> delegate;

- (void)showFromParentView:(id)a0;
- (id)initWithScreenImage:(id)a0;
- (void)updateContentViewLayout;
- (void)handleTapBlank:(id)a0;
- (void)handleTapContent:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
