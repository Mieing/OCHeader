@class NSString, NSMutableDictionary;

@interface AWEIMFeedVideoPreloadComponent : AWEIMComponentBase <AWEIMMessageTableViewAction>

@property (retain, nonatomic) NSMutableDictionary *preloadedAwemeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)preloadSize;
- (BOOL)enablePreloadVideo;
- (BOOL)enablePrepareVideoPlayer;
- (void)preloadVideoAndPlayerWithMessage:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (BOOL)isShareVideoMessage:(id)a0;
- (BOOL)isShareCommentMessage:(id)a0;
- (void)preload:(id)a0 requestScene:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)preparePlayerIfNeeded:(id)a0 referString:(id)a1;
- (void)trackStartVideoPreloadWithMessage:(id)a0 itemId:(id)a1;
- (id)videoPreloadConfig;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;

@end
