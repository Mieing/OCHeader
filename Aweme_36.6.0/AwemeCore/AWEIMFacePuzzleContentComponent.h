@class AWEIMMessageConversation, NSString, NSDictionary, AWEUserModel;
@protocol IESIMMessageProtocol;

@interface AWEIMFacePuzzleContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEUserModel *currentUser;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) BOOL isInvalid;
@property (retain, nonatomic) NSString *curBGUrl;
@property (retain, nonatomic) id<IESIMMessageProtocol> iesMessage;
@property (retain, nonatomic) NSDictionary *setting;
@property (retain, nonatomic) NSDictionary *exerciseGetResponseDict;
@property (retain, nonatomic) NSDictionary *answerGetResponseDict;
@property (nonatomic) BOOL updatedAvatar;
@property (nonatomic) long long activityStatus;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)jumpToQuestionPage:(id)a0 schemaParams:(id)a1;
+ (void)jumpToAnswerPage:(id)a0 schemaParams:(id)a1;
+ (void)jumpToActivityHomePage:(id)a0;
+ (id)p_serializeModelToJSONString:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)userRole;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_updateSubtitle;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)updateCardStatusNet:(BOOL)a0;
- (void)updateCardStatusLocal;
- (id)p_backgroundImage;
- (id)p_title;
- (void)updateCardAvatar:(id)a0 pic:(id)a1;
- (BOOL)checkRole;
- (void)p_updateCardStatusToInvalid;
- (void)p_updateQuestionCardStatus:(long long)a0 count:(long long)a1;
- (void)tapActionForShare;
- (void)tapActionForQuestion;
- (void)tapActionForAnswer;
- (void)p_jumpToAnsweringPage;
- (id)p_requestModelForQuestion:(long long)a0;
- (id)p_requestModelForAnswer:(long long)a0;
- (void)p_updateAnswerCardStatus:(long long)a0;
- (void)p_updateShareCardStatus;
- (id)p_statusDes:(id)a0;
- (id)p_topAvatarImage;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)tapAction;

@end
