@class NSString;
@protocol IESLCConnectManagerProtocol;

@interface AWELiveFrontierConnectMonitor : NSObject <IESLCConnectService>

@property (nonatomic) long long connectTimeMs;
@property (nonatomic) long long disconnectTimeMs;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;

@end
