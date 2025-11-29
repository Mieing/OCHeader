@class UITextView, UIButton, UIImageView, UILabel, BDPUniqueID, UIView;

@interface BDPCustomLoadingErrorModal_HG : UIView

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITextView *desc;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) UIView *feedbackContainerView;
@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIButton *rebootButton;

- (void)setupUIWithErrMsg:(id)a0;
- (void)p_jumpFeedback;
- (void)p_exitGame;
- (void)p_rebootGame;
- (id)initWithErrMsg:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (void)layoutUI;

@end
