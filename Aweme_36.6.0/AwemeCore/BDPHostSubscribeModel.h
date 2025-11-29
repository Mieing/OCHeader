@class NSString, NSDictionary;

@interface BDPHostSubscribeModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *data;

+ (id)hostSubscribeModelWithEventName:(id)a0 data:(id)a1;

- (void).cxx_destruct;

@end
