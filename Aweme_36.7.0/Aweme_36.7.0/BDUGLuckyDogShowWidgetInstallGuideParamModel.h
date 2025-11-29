@class NSString, NSDictionary;

@interface BDUGLuckyDogShowWidgetInstallGuideParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;
@property (nonatomic) long long needLoading;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL needFrequency;
@property (copy, nonatomic) NSString *widgetID;
@property (copy, nonatomic) NSString *source;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
