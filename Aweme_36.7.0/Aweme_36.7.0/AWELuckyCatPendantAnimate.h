@class AWELuckyCatLottieResource, AWELuckyCatPendantDescTemplate, NSString;

@interface AWELuckyCatPendantAnimate : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatLottieResource *lottieResource;
@property (nonatomic) long long animateType;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *title;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *subTitle;
@property (copy, nonatomic) NSString *animateKey;
@property (nonatomic) double offset;
@property (nonatomic) BOOL hideScore;
@property (nonatomic) BOOL hideLottie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
