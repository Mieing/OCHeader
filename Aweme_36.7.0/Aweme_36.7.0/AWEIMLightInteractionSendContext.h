@class NSString, AWENotificationModelNew, AWEAwemeModel, AWEIMLightInteractionConfig, NSDictionary;
@protocol IESIMConversationProtocol;

@interface AWEIMLightInteractionSendContext : NSObject

@property (retain, nonatomic) AWENotificationModelNew *notiModel;
@property (retain, nonatomic) AWEAwemeModel *diggAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *bindAwemeModel;
@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) id<IESIMConversationProtocol> toConversation;
@property (copy, nonatomic) NSString *toConversationID;
@property (retain, nonatomic) AWEIMLightInteractionConfig *config;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL needFrequencyControl;
@property (copy, nonatomic) NSString *quoteMsgID;
@property (copy, nonatomic) NSDictionary *addExt;
@property (copy, nonatomic) NSString *topDescSender;
@property (copy, nonatomic) NSString *topDescReceiver;
@property (copy, nonatomic) NSString *topDescSenderV3;
@property (copy, nonatomic) NSString *topDescReceiverV3;
@property (copy, nonatomic) NSString *replaceNickUserId;
@property (nonatomic) unsigned long long topDescSceneType;
@property (copy, nonatomic) NSString *matchUid;
@property (copy, nonatomic) NSString *topDescUidMatch;
@property (nonatomic) unsigned long long replayDisplayType;
@property (nonatomic) BOOL defaultDigg;
@property (nonatomic) BOOL needQuickReply;
@property (nonatomic) BOOL needRandomVariant;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *emojiFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *friendshipFundEnterMethod;
@property (nonatomic) unsigned long long friendshipFundTaskId;
@property (copy, nonatomic) NSDictionary *addSendContext;
@property (copy, nonatomic) NSDictionary *conversationParams;

- (id)initWithConversation:(id)a0 toConversationID:(id)a1 role:(unsigned long long)a2 source:(id)a3 name:(id)a4;
- (void).cxx_destruct;

@end
