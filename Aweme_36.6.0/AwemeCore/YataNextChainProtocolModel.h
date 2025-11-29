@class NSArray, NSString;

@interface YataNextChainProtocolModel : MTLModel <EventChainEventNext, MTLJSONSerializing>

@property (copy, nonatomic) NSArray *successChainEventArray;
@property (copy, nonatomic) NSArray *failedChainEventArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)successChainEventArrayJSONTransformer;
+ (id)failedChainEventArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)successEvents;
- (id)failureEvents;
- (void).cxx_destruct;

@end
