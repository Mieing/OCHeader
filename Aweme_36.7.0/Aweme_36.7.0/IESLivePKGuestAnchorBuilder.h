@class NSString, HTSLiveInteractiveAPI, IESLiveInterativeTimeOutManager;
@protocol IESLiveRoomService, IESLivePKModel;

@interface IESLivePKGuestAnchorBuilder : NSObject <IESLivePKGuestAnchorBuilderService>

@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) IESLiveInterativeTimeOutManager *timeOutManager;
@property (retain, nonatomic) id<IESLivePKModel> pkmodel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)inviteUserWithSecID:(id)a0 userID:(id)a1 sourcePage:(id)a2;
- (void)stopConnectionWithUserID:(id)a0 secUserID:(id)a1 requestSource:(id)a2;
- (void)muteGuest:(id)a0;
- (void)unMuteGuest:(id)a0;
- (BOOL)isInvitingUser:(id)a0;
- (void)acceptConnnection:(id)a0 completion:(id /* block */)a1;
- (void)acceptConnnectionWithUserID:(id)a0 secUserID:(id)a1 linkType:(unsigned long long)a2 type:(id)a3 eventParameters:(id)a4;
- (void)callOthersTogetherApply;
- (void)acceptConnnectionWithUserID:(id)a0 secUserID:(id)a1 linkType:(unsigned long long)a2 type:(id)a3 eventParameters:(id)a4 completion:(id /* block */)a5;
- (id)getMuteGusetNicknameByUserID:(id)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
