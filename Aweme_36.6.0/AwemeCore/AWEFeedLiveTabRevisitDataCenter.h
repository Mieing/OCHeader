@class NSString, NSDictionary, AWEFeedLiveTabDataApi, FeedLiveTabData, NSError;

@interface AWEFeedLiveTabRevisitDataCenter : NSObject <AWEFeedLiveTabRevisitDataCenterService>

@property (retain, nonatomic) AWEFeedLiveTabDataApi *api;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) double requestTimeStamp;
@property (retain, nonatomic) FeedLiveTabData *requestData;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long lastPullType;
@property (retain, nonatomic) NSDictionary *lastRequestParams;
@property (nonatomic) BOOL isRequestingFollowUp;
@property (nonatomic) long long delayStyle;
@property (nonatomic) double delayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)buildRequestParamsWithPullType:(long long)a0 params:(id)a1;
- (void)requestLiveTabFollowUpVisitWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestRevisitInfoWithType:(long long)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
