@class NSString, NSDictionary;

@interface AWEGrouponTransformerAutoRefreshModel : NSObject

@property (nonatomic) long long sceneType;
@property (nonatomic) long long cardType;
@property (nonatomic) long long action;
@property (nonatomic) long long forceRefresh;
@property (copy, nonatomic) NSString *refreshData;
@property (copy, nonatomic) NSDictionary *updateData;
@property (nonatomic) long long refreshReasonType;
@property (nonatomic) long long shouldRefresh;
@property (nonatomic) double expireTimeInterval;
@property (copy, nonatomic) NSString *logId;

- (id)logDictionary;
- (id)initWithSceneType:(long long)a0 cardType:(long long)a1 action:(long long)a2 forceRefresh:(long long)a3 refreshData:(id)a4 refreshReasonType:(long long)a5 updateData:(id)a6 shouldRefresh:(long long)a7 expireTimeInterval:(double)a8 logId:(id)a9;
- (void).cxx_destruct;

@end
