@class NSString, HTSLiveNativeAnimationUser, HTSLiveMemberMessageEffectConfigModel, NSDictionary, NSNumber, HTSLiveMemberMessage;

@interface HTSLiveNativeAnimationUserEnterNode : NSObject <IESLiveUserEnterNodeProtocol>

@property (nonatomic) BOOL isNeedEcomFansclubReverse;
@property (retain, nonatomic) NSNumber *messageID;
@property (retain, nonatomic) NSNumber *enterType;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long enterClass;
@property (nonatomic) unsigned long long consumptionClass;
@property (retain, nonatomic) HTSLiveNativeAnimationUser *user;
@property (retain, nonatomic) HTSLiveMemberMessageEffectConfigModel *effectConfig;
@property (retain, nonatomic) HTSLiveMemberMessage *message;
@property (nonatomic) BOOL hasEffectConfig;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) BOOL shouldStayInPowerSaveMode;
@property (nonatomic) BOOL discarded;
@property (nonatomic) double maxWaitTime;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *subSceneName;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMemberMessage:(id)a0 ecomFansclubConfig:(BOOL)a1;
- (id)transformToNativeAnimUserWithMessage:(id)a0;
- (id)transformToEffectConfigWithMessage:(id)a0;
- (id)changeBackgroundImage:(id)a0;
- (id)initWithMemberMessage:(id)a0;
- (BOOL)hasEnableEffect;
- (void).cxx_destruct;

@end
