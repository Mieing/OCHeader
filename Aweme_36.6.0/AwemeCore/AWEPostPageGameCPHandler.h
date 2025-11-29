@class NSArray, NSDictionary, NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageGameCPHandler : NSObject <AWEPostPageGameCPService>

@property (retain, nonatomic) NSArray *gameCPAddHashTagNameSignal;
@property (retain, nonatomic) NSDictionary *traceReeditParams;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (id)mediaTypeForTrack;
- (void)reportMultiAnchorSelectPanelShowTracker;
- (void)sendGameCPAddHashTagNameSignal:(id)a0;
- (void)reportTrackerWithEvent:(id)a0 extra:(id)a1;
- (id)gameCPHashTagsStringWithList:(id)a0 resolveHashTagNames:(id)a1 maxHashTagLimit:(long long)a2;
- (long long)anchorRequestPublishItemType;
- (id)p_gameCPHashTagsStringWithHashTagList:(id)a0 countLimit:(long long)a1;
- (void).cxx_destruct;

@end
