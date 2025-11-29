@class NSString;

@interface IESLiveGameOpenPlatformPaymentEntry : NSObject

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long diamonds;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL shouldShowChargePanelAutomatically;

- (id)getVersionCode;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
