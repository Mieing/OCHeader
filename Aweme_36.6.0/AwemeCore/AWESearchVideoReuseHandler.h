@class AWEPlayVideoViewController, AWEPlayVideoPlayerContext, AWESearchVideoContext, NSString;
@protocol AWESearchVideoReuseHandlerDelegate;

@interface AWESearchVideoReuseHandler : NSObject <AWESearchElementReuseProtocol>

@property (weak, nonatomic) AWESearchVideoContext *lastSearchVideoContext;
@property (nonatomic) BOOL shouldUpdatePlayer;
@property (retain, nonatomic) AWEPlayVideoViewController *playVideoViewController;
@property (retain, nonatomic) AWEPlayVideoPlayerContext *videoPlayerContext;
@property (weak, nonatomic) id<AWESearchVideoReuseHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasPrepareToReuse;
- (void)resumeSearchElementContext:(id)a0;
- (void)stashSearchElementContext;
- (void)updatePlayerWrapperContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reuseIdentifier;

@end
