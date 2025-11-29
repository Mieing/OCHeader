@class NSString, NSDictionary;

@interface IESLLPOIUGCRateDispatchBDXEventManager : NSObject

@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDictionary *lastUserInfo;

+ (id)sharedInstance;

- (void)publishBDXEventWithName:(id)a0 params:(id)a1;
- (void)nonredundantPostNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)postWithData:(id)a0;
- (void).cxx_destruct;

@end
