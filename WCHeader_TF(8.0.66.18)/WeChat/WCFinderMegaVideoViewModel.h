@class NSMutableDictionary, ForwardMessageLogicController, NSString, UIViewController;
@protocol WCFinderMegaVideoViewModelDelegate;

@interface WCFinderMegaVideoViewModel : NSObject <ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCCommitViewResultDelegate>

@property (weak, nonatomic) UIViewController<WCFinderMegaVideoViewModelDelegate> *context;
@property (retain, nonatomic) ForwardMessageLogicController *shareLogic;
@property (retain, nonatomic) NSMutableDictionary *bulletCache;
@property (retain, nonatomic) NSMutableDictionary *playerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)likeToggle:(id)a0;
- (id)favToggle:(id)a0 sourceType:(int)a1;
- (id)bulletOpenToggle:(id)a0;
- (id)getNextPageBullets:(id)a0 position:(double)a1;
- (id)getCachedBullets:(id)a0;
- (void)clearCachedBullets:(id)a0;
- (id)postBullet:(id)a0 forVideo:(id)a1 contentVM:(id)a2;
- (id)megaVideoForId:(unsigned long long)a0;
- (id)deleteVideoById:(id)a0 nonceId:(id)a1 videoId:(id)a2;
- (id)deleteComment:(id)a0 forVideo:(id)a1;
- (void)changePlayRate;
- (BOOL)isAuthorView;
- (void)showToast:(id)a0;
- (int)commentScene;
- (id)interactCountString:(unsigned long long)a0;
- (void)routeToAuthorByVideo:(id)a0;
- (void)reportBullet:(id)a0 inVideo:(id)a1;
- (void)reportVideo:(id)a0;
- (void)onMore:(id)a0;
- (id)actionSheetItemFor:(id)a0;
- (void)showShareFailForPrivate:(id)a0;
- (void)shareVideo:(id)a0;
- (void)shareToFriend:(id)a0 type:(unsigned long long)a1;
- (void)shareToMoment:(id)a0 type:(unsigned long long)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)stashPlayer:(id)a0 forUrl:(id)a1;
- (id)unstashPlayerForUrl:(id)a0;
- (id)stashedPlayerForUrl:(id)a0;
- (void)removeAllStashedPlayer;
- (void).cxx_destruct;

@end
