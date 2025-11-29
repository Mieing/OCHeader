@class UIView, MMWebImageView, MMFinderLiveAccountInfo, CAShapeLayer, UIButton, MMUILabel, MMUIButton, UILabel;

@interface MMFinderLiveMessageAccountRemindPageSheet : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *continueButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *separateViewTop;
@property (retain, nonatomic) UIView *separateViewDown;
@property (nonatomic) BOOL isContinue;
@property (retain, nonatomic) MMFinderLiveAccountInfo *accountInfo;
@property (copy, nonatomic) id /* block */ completion;

+ (void)showWithAccountInfo:(id)a0 completion:(id /* block */)a1;

- (id)initWithAccountInfo:(id)a0;
- (void)initUI;
- (void)updateData;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)onContinueButtonClicked;
- (void)onCancelButtonClicked;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
