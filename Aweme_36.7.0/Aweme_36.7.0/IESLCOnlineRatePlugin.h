@class NSTimer, NSDictionary, NSString;
@protocol IESLCConnectManagerProtocol;

@interface IESLCOnlineRatePlugin : NSObject <IESLCConnectService>

@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSDictionary *errorParams;
@property unsigned long long state;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)reportTrack;
- (void).cxx_destruct;
- (void)setup;

@end
