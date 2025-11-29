@class LOTAnimationView, NSDictionary, UILabel, UITapGestureRecognizer;

@interface AWESearchUpperSearchAITipsView : NSObject

@property (retain, nonatomic) UILabel *generatingLabel;
@property (retain, nonatomic) LOTAnimationView *generatingIconView;
@property (retain, nonatomic) UILabel *generatingTextLabel;
@property (retain, nonatomic) UILabel *generateSuccessLabel;
@property (retain, nonatomic) UILabel *generateSuccessTextLabel;
@property (retain, nonatomic) UILabel *generateFailureLabel;
@property (retain, nonatomic) UILabel *generateFailureTextLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) double curTipsLength;
@property (nonatomic) long long aiStatus;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ didClickAITipsBlock;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)configUI;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)successTextLabelClicked;
- (id)getAITipsLabelWithStatus:(long long)a0;
- (void)updateAITipsLabelWithStatus:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
