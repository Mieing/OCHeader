@class UIColor, NSString, NSArray, UIImage, UIView;

@interface IESLivePaidStreamUIConfig : NSObject

@property (weak, nonatomic) UIView *trialView;
@property (weak, nonatomic) UIView *trialContainerView;
@property (nonatomic, getter=isVerticalStream) BOOL verticalStream;
@property (nonatomic, getter=isForbidEventPenetrationInBlockView) BOOL forbidEventPenetrationInBlockView;
@property (retain, nonatomic) id uiInfo;
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
@property (nonatomic) BOOL enableAdaptBigFontMode;
@property (copy, nonatomic) NSArray *coverURLStringList;
@property (copy, nonatomic) NSString *feedNameTitle;
@property (retain, nonatomic) UIImage *feedTagImage;
@property (nonatomic) BOOL isFromLynx;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
