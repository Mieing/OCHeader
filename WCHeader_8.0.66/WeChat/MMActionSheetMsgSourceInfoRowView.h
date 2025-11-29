@class MMUIViewController, CommonMessageSourceInfoHandler, MMUIButton;

@interface MMActionSheetMsgSourceInfoRowView : UIView

@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) CommonMessageSourceInfoHandler *sourceInfoHandler;
@property (weak, nonatomic) MMUIViewController *fromViewController;

- (id)initWithSourceInfoHandler:(id)a0 fromViewController:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)handleClick;
- (void).cxx_destruct;

@end
