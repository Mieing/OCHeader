@class UIColor, NSString, NSArray, UIImage, UIView;

@interface AWEPaidStreamUIConfig : NSObject

@property (weak, nonatomic) UIView *aboveView;
@property (weak, nonatomic) UIView *trialContainerView;
@property (nonatomic, getter=isVerticalStream) BOOL verticalStream;
@property (nonatomic, getter=isForbidEventPenetrationInBlockView) BOOL forbidEventPenetrationInBlockView;
@property (retain, nonatomic) id uiInfo;
@property (nonatomic) BOOL needsShowPurchaseButton;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *trialFinishTitle;
@property (copy, nonatomic) NSString *trialPromiseTitle;
@property (copy, nonatomic) NSString *trialGrabTitle;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (copy, nonatomic) NSString *trialFinishSubTitle;
@property (copy, nonatomic) NSString *trialPromiseSubTitle;
@property (copy, nonatomic) NSString *trialGrabSubTitle;
@property (copy, nonatomic) NSArray *actionBackgroundColors;
@property (retain, nonatomic) UIColor *actionNormalTitleColor;
@property (retain, nonatomic) UIColor *actionDisabledTitleColor;
@property (copy, nonatomic) NSString *actionTrialFinishTitle;
@property (copy, nonatomic) NSString *actionTrialPromiseTitle;
@property (copy, nonatomic) NSString *actionTrialGrabTitle;
@property (nonatomic) double actionCornerRadius;
@property (copy, nonatomic) NSArray *coverURLStringList;
@property (copy, nonatomic) NSString *feedNameTitle;
@property (retain, nonatomic) UIImage *feedTagImage;
@property (nonatomic) BOOL isFromLynx;
@property (nonatomic) BOOL needBlurEffectView;
@property (nonatomic) BOOL needBlurEffectCoverImage;
@property (copy, nonatomic) NSArray *blurEffectCoverURLStringList;
@property (nonatomic) double offsetFromCenter;
@property (nonatomic) BOOL enableBackgroundClick;
@property (nonatomic) long long enlargeType;
@property (nonatomic, getter=isUseRTSBlockView) BOOL useRTSBlockView;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
