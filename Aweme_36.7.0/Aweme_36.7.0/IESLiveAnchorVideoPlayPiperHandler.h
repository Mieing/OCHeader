@class NSString;

@interface IESLiveAnchorVideoPlayPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)startLivePersonalVideoCallHandler;
- (id /* block */)stopLivePersonalVideoCallHandler;

@end
