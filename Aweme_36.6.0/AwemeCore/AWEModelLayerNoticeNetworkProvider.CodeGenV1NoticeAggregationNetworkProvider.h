@class NSNumber;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeAggregationNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *maxTime;
@property (nonatomic, retain) NSNumber *minTime;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *noticeId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithNoticeId:(id)a0 maxTime:(id)a1 count:(id)a2 minTime:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
