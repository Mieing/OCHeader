@class NSString, NSDictionary;

@interface AWEMusicStreamingImpl.LunaSubsInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ subscriberStage;
    void /* function */ expireDate;
    void /* function */ settleMethodId;
}

@property (nonatomic, copy) NSString *subscriberStage;
@property (nonatomic) BOOL isSubscribingUser;
@property (nonatomic) BOOL isSubscriber;
@property (nonatomic, copy) NSString *expireDate;
@property (nonatomic) BOOL autoRenewStatus;
@property (nonatomic, retain) NSDictionary *playEntitlements;
@property (nonatomic, retain) NSDictionary *downloadEntitlement;
@property (nonatomic) long long renewAmount;
@property (nonatomic) BOOL threeDaysAboutToExpire;
@property (nonatomic) BOOL hasChargedSubscriptionOrder;
@property (nonatomic, copy) NSString *settleMethodId;
@property (nonatomic) long long autoRenewSettleMethod;
@property (nonatomic, readonly) BOOL isExpired;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
