@class NSNumber, NSString;

@interface IESLiveUIAspectUtil : NSObject <IESLiveUIAspectProvider>

@property (nonatomic) BOOL hideOthersAvatar;
@property (nonatomic) BOOL hideOthersNickname;
@property (nonatomic) BOOL enableUserPreview;
@property (nonatomic) BOOL hideAllNickname;
@property (retain, nonatomic) NSNumber *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRoomAuth:(id)a0;
- (id)addAvatar:(id)a0 beforeAvatarlayout:(id)a1 withUserID:(id)a2 viewNormalLayoutBlock:(id /* block */)a3;
- (BOOL)hideUserAvatar:(id)a0;
- (BOOL)hideUserNickname:(id)a0;
- (BOOL)hideUserNicknameBySecUserId:(id)a0;
- (BOOL)hideAllUserNicknameExceptCurrentUser:(id)a0;
- (BOOL)hideAllUserNicknameExceptCurrentUserSecId:(id)a0;
- (BOOL)hideUserNicknameWhenAtUser;
- (BOOL)enableHideUseAvatar;
- (void)p_updateUIAspectSettings:(id)a0;
- (BOOL)isAmAudience;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
