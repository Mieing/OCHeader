@class NSString, IESLiveOpenPlatformShareScreenSEIChannel;

@interface IESLiveGameOpenPlatformSEIService : NSObject <IESLiveGameOpenPlatformSEIServiceInterface>

@property (retain, nonatomic) IESLiveOpenPlatformShareScreenSEIChannel *shareScreenSEIChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)startSendingShareScreenSEIWithStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2;
- (void)stopSendingShareScreenSEI;
- (void)startSendingShareScreenInteractSEIWithStatus:(BOOL)a0 gameRatio:(double)a1 renderMode:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
