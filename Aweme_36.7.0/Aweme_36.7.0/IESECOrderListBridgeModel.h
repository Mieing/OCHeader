@class NSString;
@protocol YataInstanceInterface, YataRenderObjectInterface;

@interface IESECOrderListBridgeModel : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *bridgeCallbackEventName;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) id<YataRenderObjectInterface> cacheBridgeNode;
@property (copy, nonatomic) NSString *bridgeName;

- (void).cxx_destruct;

@end
