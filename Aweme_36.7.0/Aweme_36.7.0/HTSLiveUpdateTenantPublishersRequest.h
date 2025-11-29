@class NSString, HTSLiveTenantPublishers;

@interface HTSLiveUpdateTenantPublishersRequest : GPBMessage

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) HTSLiveTenantPublishers *triggerTenantPublishers;
@property (nonatomic) BOOL hasTriggerTenantPublishers;
@property (nonatomic) long long triggerTimeMs;
@property (copy, nonatomic) NSString *triggerTenantId;
@property (copy, nonatomic) NSString *updateByOperation;

+ (id)requestWithOperation:(id)a0 tenant:(id)a1 publishers:(id)a2;
+ (id)descriptor;

- (id)updateByOperation;
- (id)triggerTenantId;
- (void)setUpdateByOperation:(id)a0;
- (void)setTriggerTenantId:(id)a0;
- (void)setTriggerTenantPublishers:(id)a0;
- (void)setTriggerTimeMs:(long long)a0;

@end
