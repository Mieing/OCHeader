@class NSString;
@protocol YataRenderObjectInterface;

@interface IESECOrderBridgeEventSubscription : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *eventChainName;
@property (copy, nonatomic) NSString *sessionIDName;
@property (retain, nonatomic) id<YataRenderObjectInterface> node;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
