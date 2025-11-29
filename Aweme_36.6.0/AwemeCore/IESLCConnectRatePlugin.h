@class NSDictionary, NSString;
@protocol IESLCConnectManagerProtocol;

@interface IESLCConnectRatePlugin : NSObject <IESLCConnectService>

@property double startConnectingTimestamp;
@property (nonatomic) BOOL canTrackConnectFailure;
@property (nonatomic) BOOL canTrackConnectSuccess;
@property unsigned long long state;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL resignActived;
@property (copy) NSDictionary *launchTimeDict;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)p_trackWSConnectionWithSuccess:(BOOL)a0 beforeState:(unsigned long long)a1 extra:(id)a2;
- (void)configLaunchTime:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (id)init;

@end
