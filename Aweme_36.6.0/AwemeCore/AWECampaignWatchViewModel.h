@class NSDictionary, AWECampaignTaskModel;

@interface AWECampaignWatchViewModel : NSObject

@property (retain, nonatomic) AWECampaignTaskModel *taskModel;
@property (copy, nonatomic) NSDictionary *originalParamsDic;

+ (id)configWithDic:(id)a0;
+ (id)taskModelManual:(id)a0;
+ (id)configModelWithParams:(id)a0;

- (BOOL)isCSRWatchGame;
- (BOOL)isUGPendantWatchGame;
- (void)requestAwemeWithID:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (id)paramsForRequest:(id)a0;
- (void).cxx_destruct;

@end
