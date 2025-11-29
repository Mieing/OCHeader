@class NSString;
@protocol AWEPlayVideoViewControllerProtocol, AWEIndividualPlayControllerVideoDelegate;

@interface AWEIndividualPlayController : NSObject <AWEPlayVideoDelegate>

@property (weak, nonatomic) id<AWEPlayVideoViewControllerProtocol> playerVC;
@property (weak, nonatomic) id<AWEIndividualPlayControllerVideoDelegate> videoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)prepareWithModel:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;

@end
