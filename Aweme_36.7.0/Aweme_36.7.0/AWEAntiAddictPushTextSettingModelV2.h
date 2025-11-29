@class NSArray, NSString, NSLock, NSMutableArray;

@interface AWEAntiAddictPushTextSettingModelV2 : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSMutableArray *tmpDayTextList;
@property (retain, nonatomic) NSMutableArray *tmpNightTextList;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSArray *dayTextList;
@property (copy, nonatomic) NSArray *nightTextList;
@property (copy, nonatomic) NSArray *dayButtonConfigs;
@property (copy, nonatomic) NSString *dayRemindTitle;
@property (copy, nonatomic) NSArray *nightButtonConfigs;
@property (copy, nonatomic) NSString *nightRemindTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushTextSettingDictionary;
+ (id)dayTextListJSONTransformer;
+ (id)nightTextListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)randomModel;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
