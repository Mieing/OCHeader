@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEIMActionBarShowInfo : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactNodeProtocol>

@property (copy, nonatomic) NSDictionary *resourceConfigs;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *resourceDark;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *titleColorDark;
@property (copy, nonatomic) NSString *titleColorWithBackgroundImage;
@property (copy, nonatomic) NSString *titleColorDarkWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (copy, nonatomic) NSString *backgroundColorWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColorDarkWithBackgroundImage;
@property (copy, nonatomic) NSString *display;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSArray *resourceConfigList;
@property (retain, nonatomic) NSNumber *startTimeWrapper;
@property (retain, nonatomic) NSNumber *endTimeWrapper;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *operationWrapper;
@property (retain, nonatomic) NSNumber *displayMode;
@property (retain, nonatomic) NSNumber *expMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *nodeIndex;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buildIndexNodeData;
- (void)clearIndexNodeData;
- (void)fillIndexNodeDataWithModel:(id)a0;
- (void)fillDataWithCustomizeShowInfoModel:(id)a0;
- (void).cxx_destruct;
- (long long)operation;
- (long long)endTime;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)startTime;

@end
