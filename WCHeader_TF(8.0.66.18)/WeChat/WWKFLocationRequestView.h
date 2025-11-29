@class MMHeadImageView, MMUILabel, CContact, MMUIButton, UIButton;
@protocol WWKFLocationRequestViewDelegate;

@interface WWKFLocationRequestView : MMUIView

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) MMUILabel *headerTitleLabel;
@property (retain, nonatomic) MMUILabel *contentTitleLabel;
@property (retain, nonatomic) MMUILabel *contentSubTitleLabel;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *approveButton;
@property (retain, nonatomic) MMUIButton *learnMoreButton;
@property (retain, nonatomic) CContact *contact;
@property (weak, nonatomic) id<WWKFLocationRequestViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)setupLayout;
- (void)updateView;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)onReject;
- (void)onApprove;
- (void)onLearnMore;
- (void).cxx_destruct;

@end
