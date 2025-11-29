@class IESLiveCommentContext, HTSLiveCommentStore;
@protocol IESLiveRoomService, IESLiveVerifyConfigAdapter, IESLiveCustomConfig;

@interface IESLiveCommentAuthChecker : NSObject

@property (weak, nonatomic) HTSLiveCommentStore *store;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveVerifyConfigAdapter> verifyConfig;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) IESLiveCommentContext *context;
@property (nonatomic) BOOL isProhibitHot;
@property (nonatomic) double lastCommentSendCallTime;
@property (nonatomic) double commentSendAPICallTimeSpace;
@property (nonatomic) BOOL commentSendAPICallTimeSpaceEnable;

- (BOOL)checkAnchorCommentSettingEnable;
- (BOOL)needBindPhone;
- (BOOL)checkIfCommentEnableWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkIfCommentEnableBase:(id /* block */)a0;
- (BOOL)checkIfCommentEnableFurther:(id /* block */)a0;
- (BOOL)apiCallTimeSpaceCheck;
- (void)loginWithEntriesInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkPublicScreenType;
- (void)fetchAndProcessForbiddenInfo;
- (void)monitorCheckFailedWithResult:(unsigned long long)a0 baseState:(BOOL)a1 toast:(id)a2;
- (BOOL)checkAnchorCommentSettingDisableInTrial;
- (BOOL)checkChatChannelJoinState;
- (BOOL)hasLimitCommentData;
- (id)toastStringWithAuthType:(unsigned long long)a0;
- (void)processWindowsPrompt:(id)a0;
- (id)commentAuthCheckSendAuthTip;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;

@end
