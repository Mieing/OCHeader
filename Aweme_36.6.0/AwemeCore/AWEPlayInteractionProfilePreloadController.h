@class NSString, NSDictionary, NSTimer, NSMutableDictionary, NSNumber;

@interface AWEPlayInteractionProfilePreloadController : AWEPlayInteractionNewBaseController

@property (copy, nonatomic) NSString *profilePreloadItemID;
@property (retain, nonatomic) NSDictionary *profilePreloadParamDictionary;
@property (retain, nonatomic) NSNumber *playBeginTime;
@property (retain, nonatomic) NSTimer *predictTimer;
@property (retain, nonatomic) NSTimer *playDelayTimer;
@property (nonatomic) long long playDeplayPredictedCount;
@property (retain, nonatomic) NSMutableDictionary *preloadActionDictionary;

- (id)feedPageContext;
- (id)preloadConfig;
- (void)onAddCommentNotification:(id)a0;
- (void)clearPreloadInfo;
- (BOOL)enablePreloadWithAction:(id)a0;
- (void)preloadProfileWithAction:(id)a0;
- (void)preloadProfileIfNeedForPlayDelay:(double)a0;
- (void)addCommentNotify;
- (void)removeCommentNotify;
- (BOOL)allowPredictWitLimitCountChecked:(id)a0;
- (void)doNunkiPreloadProfile:(id)a0;
- (BOOL)enableProfilePreload;
- (void)doProfilePreloadWithModel:(id)a0 preloadTypes:(long long)a1 res:(id)a2;
- (id)getProfilePreloadParamDictWithModel:(id)a0;
- (id)currentAuthorForModel:(id)a0;
- (id)customUserProfileSchemaForModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;

@end
