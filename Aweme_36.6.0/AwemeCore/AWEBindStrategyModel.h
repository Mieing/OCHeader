@class NSArray, AWECodeGenEntranceMsgConfigModel, NSString, AWECodeGenOperationalStrategyModel;

@interface AWEBindStrategyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *itemList;
@property (retain, nonatomic) AWECodeGenOperationalStrategyModel *redDotModel;
@property (copy, nonatomic) AWECodeGenEntranceMsgConfigModel *defaultMsgConfig;
@property (nonatomic) long long taskCacheTime;
@property (copy, nonatomic) NSArray *clearCacheTaskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
