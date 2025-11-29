@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMBizTrackerUtil : NSObject <IESIMBizTrackService>

@property (retain, nonatomic) NSMutableDictionary *enterChatIdMap;
@property (retain, nonatomic) NSMutableDictionary *unreadCountBeforeEnterChatMap;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *createSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationCommonParamsWithKeys:(unsigned long long)a0 conversation:(id)a1;
+ (id)conversationCommonParamsWithKeys:(unsigned long long)a0 ies_conversation:(id)a1;
+ (void)resetEnterChatIdForConversationId:(id)a0;
+ (id)userCommonParamsWithKeys:(unsigned long long)a0 user:(id)a1;
+ (id)enterChatIdForConversationId:(id)a0;
+ (long long)unreadMessageCountForIESConversation:(id)a0;
+ (id)generateAndSaveEnterChatIdForConversationId:(id)a0;
+ (id)sharedInstance;

- (id)p_generateAndSaveEnterChatIdForConversationId:(id)a0;
- (id)p_getEnterChatIdForConversationId:(id)a0;
- (void)p_resetEnterChatIdForConversationId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
