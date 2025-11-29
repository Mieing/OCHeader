@class NSString, NSArray, AWESplashBreathExpandModel, NSDictionary, AWESplashClickExpandAreaModel;

@interface AWESplashClickModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hintText;
@property (retain, nonatomic) AWESplashClickExpandAreaModel *expandInsets;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) long long styleEdition;
@property (retain, nonatomic) NSArray *fullPeriods;
@property (nonatomic) long long fullCount;
@property (nonatomic) double conversionContainerButtonWidth;
@property (nonatomic) double conversionContainerButtonHeight;
@property (nonatomic) double fullTiming;
@property (retain, nonatomic) AWESplashBreathExpandModel *breathInsets;
@property (copy, nonatomic) NSString *breathColor;
@property (nonatomic) double bottomMargin;
@property (nonatomic) long long titleFontSize;
@property (nonatomic) long long bgColorAlpha;
@property (nonatomic) double buttonOuterWidth;
@property (copy, nonatomic) NSString *buttonOuterColor;
@property (copy, nonatomic) NSDictionary *sensitivityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)expandInsetsJSONTransformer;
+ (id)breathInsetsJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
