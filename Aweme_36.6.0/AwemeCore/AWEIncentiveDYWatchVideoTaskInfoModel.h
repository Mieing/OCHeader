@class NSString, AWEIncentiveDYPendantConfModel;

@interface AWEIncentiveDYWatchVideoTaskInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasNext;
@property (nonatomic) long long nextCycleTime;
@property (copy, nonatomic) NSString *nextToken;
@property (retain, nonatomic) AWEIncentiveDYPendantConfModel *pendantConfModel;
@property (nonatomic) long long goldAmount;
@property (copy, nonatomic) NSString *liveBlockInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pendantConfModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
