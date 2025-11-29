@class NSMutableDictionary, NSDictionary, NSArray, NSString, IESLiveComponentDynamicSyncConfig;

@interface IESLiveComponentDynamicConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *intervalConfig;
@property (retain, nonatomic) NSMutableDictionary *realIntervalConfig;
@property (retain, nonatomic) NSDictionary *loadPriorityConfig;
@property (retain, nonatomic) NSArray *levelAddList;
@property (retain, nonatomic) NSArray *levelCombineList;
@property (retain, nonatomic) IESLiveComponentDynamicSyncConfig *syncConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)levelAddListJSONTransformer;
+ (id)levelCombineListJSONTransformer;
+ (id)syncConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)doRealTransition;
- (void).cxx_destruct;

@end
