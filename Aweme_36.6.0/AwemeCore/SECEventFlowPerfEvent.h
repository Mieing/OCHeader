@class NSDictionary, NSString;

@interface SECEventFlowPerfEvent : NSObject <SECBaseEvent>

@property (copy, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
