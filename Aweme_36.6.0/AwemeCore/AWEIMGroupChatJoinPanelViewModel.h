@class AWEIMGroupJoinPanelStatusAlongWithAction, NSString, NSDictionary, AWEIMGroupInviteMessage, AWEIMGroupJoinPanelVerifyResult, AWEIMGroupJoinResult, AWEIMGroupChatJoinPanelModel;
@protocol IESIMGroupInviteCardDataControllerProtocol;

@interface AWEIMGroupChatJoinPanelViewModel : NSObject <AWEIMGroupChatJoinPanelViewModelProtocol>

@property (readonly, nonatomic) id<IESIMGroupInviteCardDataControllerProtocol> dataController;
@property (readonly, nonatomic) long long inviteCardType;
@property (copy, nonatomic) NSDictionary *groupParams;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) AWEIMGroupJoinPanelVerifyResult *verifyResult;
@property (readonly, nonatomic) AWEIMGroupInviteMessage *msg;
@property (nonatomic) BOOL closeWhenJoinFail;
@property (nonatomic) BOOL needTransferToGroup;
@property (nonatomic) BOOL dontShowToast;
@property (copy, nonatomic) NSString *customizedButtonTitle;
@property (copy, nonatomic) NSString *panelUUIDString;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (copy, nonatomic) NSDictionary *extraTrackDict;
@property (readonly, nonatomic) AWEIMGroupChatJoinPanelModel *model;
@property (readonly, copy, nonatomic) NSDictionary *rawDictionary;
@property (retain, nonatomic) AWEIMGroupJoinPanelStatusAlongWithAction *statusWithAction;
@property (retain, nonatomic) AWEIMGroupJoinResult *joinResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (id)initWithParamDict:(id)a0;
- (void)renderModel:(id)a0;
- (id)requestParamSecretType;
- (id)__trackPanelTypeOfCardType:(long long)a0;
- (id)__enterFromParam;
- (id)__fetchVerifyResp;
- (id)__constructItemViewModels:(id)a0 statusCode:(unsigned long long)a1;
- (id)__joinAllowanceWithVerify:(id)a0;
- (id)__extraParamsForOpenPlatform;
- (void)__trackReserveCardShowWithStatusCode:(unsigned long long)a0;
- (id)__cardTypeToEnterFromMap;
- (id)__confirmButtonWithVerifyResp:(id)a0 statusCode:(unsigned long long)a1;
- (void)__enterGroupWithConversationID:(id)a0;
- (void)__trackClickAndJoin;
- (id)__joinWithVerifyResp:(id)a0;
- (id)fetchItemsResult;
- (void).cxx_destruct;

@end
