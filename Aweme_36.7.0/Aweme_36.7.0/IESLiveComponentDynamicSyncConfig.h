@class NSDictionary, NSString;

@interface IESLiveComponentDynamicSyncConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL levelEntrench;
@property (nonatomic) double overTime;
@property (retain, nonatomic) NSDictionary *taskMap;
@property (nonatomic) BOOL loadRankListWithNoDelay;
@property (nonatomic) BOOL toolbarSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
