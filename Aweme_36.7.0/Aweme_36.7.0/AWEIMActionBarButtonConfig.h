@class NSArray, NSString, AWEIMActionBarShowInfo, AWEIMActionBarDynamicButton, NSNumber, NSDictionary;

@interface AWEIMActionBarButtonConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (retain, nonatomic) AWEIMActionBarShowInfo *defaultShowInfo;
@property (copy) NSArray *hitShowInfos;
@property (copy, nonatomic) NSArray *exitConfigs;
@property (copy, nonatomic) NSString *sortName;
@property (retain, nonatomic) AWEIMActionBarDynamicButton *dynamicBtn;
@property (retain, nonatomic) NSNumber *refreshMode;
@property (copy, nonatomic) NSDictionary *mobExtra;
@property (retain, nonatomic) NSNumber *typeWrapper;
@property (retain, nonatomic) NSNumber *priorityV2Wrapper;
@property (retain, nonatomic) NSNumber *selectModeWrapper;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *operationWrapper;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *dynamicExt;
@property (copy, nonatomic) NSString *dynamicBiz;
@property (nonatomic) BOOL useLastCache;
@property (nonatomic) BOOL dynamicReplace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)exitConfigsJSONTransformer;
+ (id)hitShowInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)selectMode;
- (BOOL)isBusinessCustomConfig;
- (double)priority2;
- (void).cxx_destruct;
- (long long)operation;
- (id)init;
- (unsigned long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
