@class MMUILabel, MMFinderLivePayButton;
@protocol MMFinderLivePaymentRetryViewBarDelegate;

@interface MMFinderLivePaymentRetryViewBar : UIView

@property (nonatomic) unsigned long long currentLivePaymentType;
@property (nonatomic) long long entranceSrc;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int timeLimit;
@property (nonatomic) unsigned int trialEndTime;
@property (nonatomic) unsigned int costWeBeanCount;
@property (nonatomic) BOOL isInAnimation;
@property (retain, nonatomic) MMUILabel *retryViewTipLabel;
@property (retain, nonatomic) MMFinderLivePayButton *payButton;
@property (nonatomic) long long payButtonState;
@property (nonatomic) BOOL needHidden;
@property (nonatomic) unsigned int lastExtendTime;
@property (nonatomic) long long countDownMode;
@property (copy, nonatomic) id /* block */ countDownUpdatedCallback;
@property (copy, nonatomic) id /* block */ payActionCallback;
@property (nonatomic) long long layoutOrientation;
@property (weak, nonatomic) id<MMFinderLivePaymentRetryViewBarDelegate> delegate;
@property (nonatomic) BOOL isPreparingNotPaidAnimation;

+ (double)preferHeight;

- (id)initWithFromSource:(long long)a0 countDownMode:(long long)a1;
- (void)layoutSubviews;
- (double)paybuttonWidth;
- (double)paybuttonTop;
- (void)startCountDown;
- (void)stopCountdown;
- (void)updateCurrentLivePaymentType:(unsigned long long)a0 remainTime:(unsigned int)a1 timeLimit:(unsigned int)a2 trialEndTime:(unsigned int)a3 costWeBeanCount:(unsigned int)a4;
- (void)updateTimeLimit:(unsigned int)a0;
- (void)updateTrialEndTime:(unsigned int)a0;
- (void)updateRemainTime:(unsigned int)a0 checkEqual:(BOOL)a1 isExpandingTime:(BOOL)a2;
- (void)executeAnimation;
- (void)terminateAndDrainRemainTime;
- (void)updateHidden:(BOOL)a0;
- (void)updateSelfDisplay;
- (BOOL)isCurrentParamsValid;
- (void)countDown;
- (void)updateForRemainTimeChanged;
- (void)layoutUI;
- (void)layoutRetryViewTipLabel;
- (void)updateRetryViewTipLabelOrigin;
- (void)layoutPayButton;
- (void)onPayActionTimeout;
- (double)getPayButtonRight;
- (void)updateRetryViewTip;
- (id)getPayButtonAttributedText:(BOOL)a0;
- (id)getPayButtonAttributedTextInPayState;
- (void).cxx_destruct;

@end
