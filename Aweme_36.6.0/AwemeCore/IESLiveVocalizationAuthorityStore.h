@class HTSEventContext, HTSLiveScreenChatSetting, IESLiveAnchorPayFunctionSettingCellItem, ChatSettingGetResponse_ResponseData, IESLiveAudioChatSettingApi, NSMutableArray, NSDictionary, IESLivePrivilegeScreenChatApi;
@protocol IESLiveRoomService, IESLiveVocalizationAuthorityProtocol;

@interface IESLiveVocalizationAuthorityStore : NSObject

@property (retain, nonatomic) IESLiveAnchorPayFunctionSettingCellItem *privilegeItem;
@property (retain, nonatomic) HTSLiveScreenChatSetting *privilegeDanamkuSetting;
@property (retain, nonatomic) IESLivePrivilegeScreenChatApi *screenChatSettingApi;
@property (retain, nonatomic) IESLiveAudioChatSettingApi *audioChatSettingApi;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) ChatSettingGetResponse_ResponseData *audioChatSettingModel;
@property (nonatomic) BOOL needShowDanmakuSetting;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) id<IESLiveVocalizationAuthorityProtocol> delegate;

- (void)didSetAttachingDIContext;
- (id)initWithPrivilegeDanmakuSetting:(id)a0 audioChatSettingModel:(id)a1 needShowDanmakuSetting:(BOOL)a2 trackContext:(id)a3;
- (void)setupSectionsWithStatus:(long long)a0;
- (void)trackAnchorCommentGroupClick:(int)a0;
- (void)trackAnchorResetMessageChannelSwicth:(BOOL)a0;
- (void)resetVocalizationAuthoritySwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)chooseVocalizationAuthorityScope:(long long)a0 completion:(id /* block */)a1;
- (void)resetVocalizationAuthorityStageTrialSwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetAllowAudioChatSwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetAutoPlaySwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetMessageChannelEnableSwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetDanmakuSwicth:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetVideoShareSwitch:(BOOL)a0 completion:(id /* block */)a1;
- (id)privilegeDetailStore;
- (void).cxx_destruct;

@end
