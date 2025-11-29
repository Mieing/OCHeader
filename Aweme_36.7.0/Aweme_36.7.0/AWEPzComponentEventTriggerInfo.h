@class NSString, NSDictionary;

@interface AWEPzComponentEventTriggerInfo : NSObject <AWEPzComponentEventTriggerInfoProtocol>

@property (copy, nonatomic) NSString *strategyType;
@property (copy, nonatomic) NSString *strategyID;
@property (copy, nonatomic) NSDictionary *customParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
