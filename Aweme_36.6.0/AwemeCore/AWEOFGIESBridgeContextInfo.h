@class IESBridgeEngine, IESBridgeMessage;

@interface AWEOFGIESBridgeContextInfo : NSObject

@property (retain, nonatomic) IESBridgeEngine *bridgeEngine;
@property (retain, nonatomic) IESBridgeMessage *bridgeMessage;

- (void).cxx_destruct;

@end
