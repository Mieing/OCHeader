@class NSString, AWEIMUser, AWEIMUserPrivacyGetAliasCommonScene;
@protocol IESIMConversationProtocol;

@interface AWEIMUserPrivacyInfoTracker : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) unsigned long long aliasType;
@property (retain, nonatomic) AWEIMUserPrivacyGetAliasCommonScene *scene;

- (BOOL)doTrack;
- (void)recordUserWithAWEIMUser:(id)a0;
- (void)recordConversationWithConversationID:(id)a0;
- (void)recordSceneWithCommonScene:(id)a0;
- (void)recordResultType:(unsigned long long)a0;
- (void)recordDisplayText:(id)a0;
- (BOOL)p_shouldTrackByHMD;
- (BOOL)p_randomPicked;
- (void)p_collectInfoAndUpload;
- (id)p_sceneString;
- (long long)p_fromUID;
- (long long)p_toUID;
- (id)p_conversationID;
- (long long)p_conversationShortID;
- (id)p_aliasType;
- (id)p_aliasContent;
- (int)p_followRelation;
- (id)__subSceneString;
- (BOOL)p_prepareUser;
- (BOOL)p_prepareConversation;
- (void)recordUserWithUID:(id)a0;
- (void)recordConversationWithIESConversation:(id)a0;
- (void)recordSceneWithScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
