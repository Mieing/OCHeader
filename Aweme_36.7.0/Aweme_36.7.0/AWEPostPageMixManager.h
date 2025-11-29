@class UIViewController, AWEMixVideoModel;
@protocol AWEPostPageMixManagerProtocol, AWEMixInformationListViewControllerProtocol;

@interface AWEPostPageMixManager : NSObject

@property (nonatomic) BOOL isNeedShowCreate;
@property (retain, nonatomic) UIViewController<AWEMixInformationListViewControllerProtocol> *MixVC;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL isFinishedSetup;
@property (nonatomic) long long createdMixCount;
@property (retain, nonatomic) AWEMixVideoModel *currentMix;
@property (weak, nonatomic) id<AWEPostPageMixManagerProtocol> delegate;

+ (BOOL)allowToJoinMixWithScene:(long long)a0;
+ (BOOL)allowToJoinMixWithModel:(id)a0;
+ (void)showNotAllowJoinMixAlertWithCreateSoon:(BOOL)a0 toastText:(id)a1;
+ (id)publishMixInfoModelFrom:(id)a0;
+ (id)joinMixIcon;
+ (id)defaultJoinMixIntroText;
+ (id)notAllowJoinMixTitle;
+ (void)trackBannedToJoinMixShowEvent:(id)a0;
+ (id)publishMixInfoModelFrom:(id)a0 isPostPage:(BOOL)a1;
+ (id)mixModelFrom:(id)a0;
+ (void)getCurrentUserCreateMixCount:(id /* block */)a0;
+ (id)joinMixTitle;

- (void)updateFromDraftWithMixInfo:(id)a0;
- (void)removeCurrentMixIsNeedDialog:(BOOL)a0 isNeedReportEvent:(BOOL)a1;
- (BOOL)isNeedShowCreateMix;
- (void)showMixInformationListWithClickHandle:(id /* block */)a0;
- (id)currentPublishConfig;
- (void)creatMixFromFrontPageNotification:(id)a0;
- (void)trackShowCreatMixEvent;
- (void)trackShowJoinMixEvent;
- (id)currentPublishMixInfo;
- (id)createMixInfoListVCWith:(id)a0 enterFrom:(id)a1;
- (void)updateMixCount;
- (void)trackClickRemoveNewMixEvent;
- (void)showRemoveCurrentMixDialog;
- (void)trackClickRemoveMixEvent;
- (void)trackClickJoinMixEvent;
- (void)addPublishInfoWithParams:(id)a0;
- (void)trackClickCreateMixEvent;
- (id)addPublishModelParamsWithParams:(id)a0;
- (void)trackClickRemoveMixConfirmEvent;
- (void)removeCurrentMixWithCompletion:(id /* block */)a0;
- (id)currentPublishMixParams;
- (void)trackCreatedMixSuccess;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithScene:(long long)a0 delegate:(id)a1;

@end
