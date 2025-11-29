@class NSString, IESLiveStrategyCloudFeatureCenter;
@protocol IESLiveStrategyDataCenterProtocol;

@interface IESLivePTYFeatureProducer : NSObject <PTYIFeatureProducer>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) id<IESLiveStrategyDataCenterProtocol> dataCenter;
@property (retain, nonatomic) IESLiveStrategyCloudFeatureCenter *cloudFeatureCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getStrFeature:(id)a0 extParams:(id)a1;
- (float)getNumicFeature:(id)a0 extParams:(id)a1;
- (id)getSeqFeature:(id)a0 extParams:(id)a1;
- (id)getDictFeature:(id)a0 extParams:(id)a1;
- (void)setupDataCenter:(id)a0;
- (void)registerProducer;
- (void).cxx_destruct;
- (id)groupName;
- (id)init;

@end
