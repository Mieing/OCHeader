@class MMUIImageView, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveReplayOpenTipView : MMPageSheetBaseView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIImageView *headImageView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *createReplayButton;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) MMUIButton *agreementButton;
@property (nonatomic) BOOL isAgreementChecked;
@property (retain, nonatomic) MMUILabel *introduceLabel;
@property (retain, nonatomic) MMUILabel *memberLabel;
@property (retain, nonatomic) MMUIButton *memberAgreementCheckbox;
@property (retain, nonatomic) MMUIButton *memberAgreementButton;
@property (nonatomic) BOOL isMemberAgreementChecked;
@property (retain, nonatomic) UIView *topSepelateLine;
@property (retain, nonatomic) UIView *midSelateLine;
@property (retain, nonatomic) UIView *bottomSepelateLine;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL showMemberReplaySwitch;
@property (nonatomic) double currentHeight;
@property (nonatomic) unsigned long long replayState;
@property (nonatomic) BOOL isChargableLive;
@property (nonatomic) BOOL isMemberLive;
@property (copy, nonatomic) id /* block */ createReplayBlock;

+ (double)getLiveReplayOpenTipViewHeight:(unsigned int)a0 showMemberReplaySwitch:(BOOL)a1 width:(double)a2;
+ (double)getDetailHeight:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateData:(unsigned long long)a0 isMemberLive:(BOOL)a1 isChargableLive:(BOOL)a2 showMemberReplaySwitch:(BOOL)a3 height:(double)a4;
- (void)createUI;
- (BOOL)canShowMemberLabel;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)onCheckBoxClicked;
- (void)onMemberCheckBoxClicked;
- (void)updateAccessbility;
- (void)updateMemberAccessbility;
- (void)createReplayAction;
- (void)leftButtonAction;
- (void).cxx_destruct;

@end
