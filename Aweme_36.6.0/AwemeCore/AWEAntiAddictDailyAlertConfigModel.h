@class NSString, NSArray, NSNumber;

@interface AWEAntiAddictDailyAlertConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *geckoChannelID;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *lottieName;
@property (readonly, copy, nonatomic) NSString *videoName;
@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, copy, nonatomic) NSString *leftButtonTitle;
@property (readonly, copy, nonatomic) NSString *rightButtonTitle;
@property (readonly, copy, nonatomic) NSArray *options;
@property (readonly, copy, nonatomic) NSNumber *defaultOption;
@property (readonly, copy, nonatomic) NSString *optionTextColor;
@property (readonly, copy, nonatomic) NSString *backgroundColor;
@property (readonly, copy, nonatomic) NSString *backgroundImage;
@property (readonly, copy, nonatomic) NSArray *sliderColor;
@property (readonly, copy, nonatomic) NSArray *optionBgColor;
@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, copy, nonatomic) NSString *linkTextKeyword;
@property (readonly, copy, nonatomic) NSString *linkTextSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titlesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
