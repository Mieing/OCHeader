@class NSString, NSMutableArray;

@interface AWEAwemeShowEntCommentVideoContinueController : AWEAwemeFeedBaseController <AWEAwemeFeedBaseControllerProtocol>

@property (nonatomic) BOOL isVideoPlayerPlaying;
@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (BOOL)enableContinueVideoPlay;
- (void)p_bindEvent;
- (void)p_unbindEvent;
- (id)p_registerEvent:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
