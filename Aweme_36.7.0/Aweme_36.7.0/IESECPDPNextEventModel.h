@class NSArray, NSString;

@interface IESECPDPNextEventModel : MTLModel <EventChainEventNext, MTLJSONSerializing>

@property (copy, nonatomic) NSArray *successChain;
@property (copy, nonatomic) NSArray *failedChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)successChainJSONTransformer;
+ (id)failedChainJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)successEvents;
- (id)failureEvents;
- (void).cxx_destruct;

@end
