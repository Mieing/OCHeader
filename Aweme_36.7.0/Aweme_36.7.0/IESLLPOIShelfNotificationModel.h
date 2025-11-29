@class NSString, NSDictionary;

@interface IESLLPOIShelfNotificationModel : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *sessionID;

- (id)initWithEventName:(id)a0 eventParams:(id)a1 sessionID:(id)a2;
- (id)initWithEventName:(id)a0 eventParams:(id)a1;
- (void).cxx_destruct;

@end
