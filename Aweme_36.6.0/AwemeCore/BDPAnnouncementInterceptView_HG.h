@class UITextView, UILabel, UIView, UIButton;

@interface BDPAnnouncementInterceptView_HG : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITextView *desc;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ jumpAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)onCloseButtonClick;
- (void)setupUIWithModel:(id)a0;
- (void)onJumpButtonClick;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutUI;

@end
