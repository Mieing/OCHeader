@class NSString;

@interface AWEPublishAnchorDataService : NSObject <ACCPublishAnchorDataService>

@property (nonatomic) BOOL postPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportAnchorListForQuickStory;
- (void)cleanAnchorInfoWithPublishModel:(id)a0;
- (BOOL)cleanSilentAnchorInfoIfNeeded:(id)a0 anchorTypes:(id)a1;
- (void)setSilentAnchorInfoIfNeeded:(id)a0;
- (void)setIsPostPage:(BOOL)a0;
- (BOOL)isPostPage;
- (id)cameraSupportCancelAnchorList;
- (void)silentPassiveAnchorInfoWithPublishModel:(id)a0 anchorType:(long long)a1 anchorID:(id)a2 anchorContent:(id)a3 anchorTitle:(id)a4 anchorTag:(id)a5 anchorIconList:(id)a6 source:(long long)a7 anchorPublishParam:(id)a8 anchorTrackParams:(id)a9 undeletableToast:(id)a10 openUrl:(id)a11 subType:(long long)a12 scene:(id)a13;
- (void)passiveAnchorInfoWithPublishModel:(id)a0 anchorType:(long long)a1 anchorID:(id)a2 anchorContent:(id)a3 anchorTitle:(id)a4 anchorTag:(id)a5 anchorIconList:(id)a6 source:(long long)a7 anchorPublishParam:(id)a8 anchorTrackParams:(id)a9 undeletableToast:(id)a10 openUrl:(id)a11 subType:(long long)a12 scene:(id)a13;
- (void)setSilentAnchorInfoIfNeeded:(id)a0 providerClasses:(id)a1;
- (id)allProviderClasses;

@end
