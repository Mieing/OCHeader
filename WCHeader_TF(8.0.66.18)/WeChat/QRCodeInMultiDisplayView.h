@class MMUILabel, MMTimer, MMUIView, MMUIButton, NSMutableArray;
@protocol QRCodeInMultiDisplayViewDelegate;

@interface QRCodeInMultiDisplayView : MMUIView

@property (retain, nonatomic) NSMutableArray *dotInfoList;
@property (retain, nonatomic) MMUIView *curMaskView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) NSMutableArray *markDotViewList;
@property (retain, nonatomic) MMUILabel *infoLabel;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<QRCodeInMultiDisplayViewDelegate> delegate;

- (id)initWithDotInfoList:(id)a0;
- (void)initSubView;
- (void)layoutSubviews;
- (void)initDotViews;
- (void)setUpBreathAnimationTimmer;
- (void)startBreatheAnimation;
- (void)onDotViewClicked:(id)a0;
- (void)initMastView;
- (void)initCancelBtn;
- (void)onCancelBtnClicked:(id)a0;
- (void)layoutQRCodeDotViewInMulti:(id)a0;
- (void)initInfoLabel;
- (BOOL)isWordingCollisionWithAnyMarkDotView;
- (BOOL)isSameCodeTypeName;
- (id)getInfoLabelText;
- (void)timerInvalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
