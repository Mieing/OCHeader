@class NSMutableDictionary;

@interface AWEIMMangoIncentiveChatBagTaskPollingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)cancelPollingWithIdentifier:(id)a0;
- (void)startIncentiveChtBagTaskPollingMGetRequestWithTaskID:(id)a0 taskToken:(id)a1 taskGroup:(id)a2 scene:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
