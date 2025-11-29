@class NSString, UIWindow;
@protocol AWEScreenCastPendantDataProvider;

@interface AWEScreenCastPendantServiceImp : NSObject <AWEScreenCastPendantService>

@property (weak, nonatomic) id<AWEScreenCastPendantDataProvider> dataProvider;
@property (weak, nonatomic) id<AWEScreenCastPendantDataProvider> outerPageDataProvider;
@property (readonly, copy, nonatomic) NSString *lastScene;
@property (readonly, copy, nonatomic) NSString *lastSubScene;
@property (readonly, nonatomic) UIWindow *pendantHostWindow;
@property (readonly, nonatomic) BOOL isPendantActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveModuleService;
- (BOOL)newPendantEnabled;
- (BOOL)castStateFeedbackEnabled;
- (void)updatePendantVisibility:(BOOL)a0 forScene:(id)a1 subScene:(id)a2;
- (void)setForbiddenAttachmentAreas:(id)a0;
- (void)endPendantService;
- (void)registerTapHandler;
- (id)getEnterFrom:(id)a0;
- (void)gotoLiveRoomWith:(id)a0 userID:(id)a1;
- (void)gotoPlaybackWith:(id)a0;
- (void)onLiveEnd;
- (void).cxx_destruct;
- (id)init;

@end
