@class NSString, UIViewController, NSDictionary;

@interface AWEECLiveSmallWindowManager : NSObject <IESECGoodsDetailLiveFloatOnTop>

@property (weak, nonatomic) UIViewController *targetVC;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIViewController *tmpTargetVC;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSDictionary *logExtraData;
@property (retain, nonatomic) NSString *openIdentifier;
@property (nonatomic) long long streamState;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)getLiveSmallWindowService;
- (void)muteLive:(BOOL)a0;
- (void)resumeSmallWindowStream;
- (void)startVideoRendering;
- (void)pauseSmallWindowStream;
- (void)attachWithOldSmallWindowApi;
- (void)attachUsingNewRule;
- (void)attachUsingOldRule;
- (id)preferOptionsWithRoomID:(id)a0 isInRoom:(BOOL)a1 from:(id)a2;
- (void)clearSmallWindowActionBlock;
- (BOOL)isConnectedWithTheAnchor;
- (void)stopVideoRendering;
- (void)setSmallLiveWindowTop:(double)a0;
- (void)registerAttachCompletionBlock:(id /* block */)a0;
- (void)unregisterAttachCompletionBlock;
- (void)transferViewTo:(id)a0;
- (void)restoreViewToManager;
- (void)pauseAndHideMiniWindow;
- (void).cxx_destruct;
- (id)init;
- (void)detach;
- (void)attach;

@end
