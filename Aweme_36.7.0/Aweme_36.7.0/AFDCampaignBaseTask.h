@class NSNumber, NSString, AFDCampaignTaskContext;

@interface AFDCampaignBaseTask : NSObject <AFDCampaignTaskProtocol>

@property (readonly, nonatomic) AFDCampaignTaskContext *context;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSNumber *successBizCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithContext:(id)a0;
+ (id)topic;

- (BOOL)hasFollowedUserID:(id)a0;
- (void)finishWithParams:(id)a0 completion:(id /* block */)a1;
- (void)addFollowedUserID:(id)a0;
- (void)trackSFTaskFollowUser:(id)a0 enterMethod:(id)a1;
- (id)followedUserIDs;
- (id)p_followedUserIDsKey;
- (void)finishWithParams:(id)a0 openSchema:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)remove;
- (id)initWithContext:(id)a0;
- (id)init;

@end
