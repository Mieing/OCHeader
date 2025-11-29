@class NSArray, NSDictionary, NSString;

@interface IESLiveAioLinkObserveEntranceReceiverListResponse : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *receiverList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)receiverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
