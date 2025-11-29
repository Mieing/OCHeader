@class NSString;
@protocol IESLCConnectManagerProtocol;

@interface IESIMWSConnectPlugin : NSObject <IESLCConnectService>

@property unsigned long long currentState;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;

@end
