@class TTBridgeCommand;
@protocol TTBridgeEngine;

@interface AWEOFGTTBridgeContextInfo : NSObject

@property (retain, nonatomic) id<TTBridgeEngine> bridgeEngine;
@property (retain, nonatomic) TTBridgeCommand *bridgeCommand;

- (void).cxx_destruct;

@end
