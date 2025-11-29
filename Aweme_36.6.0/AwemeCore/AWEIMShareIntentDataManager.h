@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMShareIntentDataManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, IESIMShareIntentInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableDictionary *trackTempInfoDict;
@property (nonatomic) BOOL enableALog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enterFrom;
+ (void)trackShareVideoToChat:(id)a0 shareModels:(id)a1;
+ (void)trackShareVideoSuccess:(id)a0 shareModel:(id)a1;
+ (id)p_attachmentObjectForPath:(id)a0;
+ (void)createShareModelWithCid:(id)a0 needFetch:(BOOL)a1 completion:(id /* block */)a2;
+ (BOOL)isGif:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)updateSystemShareSuggestionIfNeeded:(id)a0;
- (void)p_systemShareSwitchChanged:(id)a0;
- (void)setupDefaultState;
- (void)readAndWriteALog;
- (BOOL)p_isSystemShareSwitchOn;
- (void)p_addToShareSuggestion:(id)a0;
- (void)p_removeLastSuggestios:(id /* block */)a0;
- (void)p_updateGroupUserDefault:(id)a0 value:(id)a1;
- (void)p_updateSystemShareMessageState;
- (BOOL)isSystemShareSuggestionEnable;
- (void)p_updateSystemShareNewStyle;
- (BOOL)isSystemShareMessageEnable;
- (void)p_showShareListWithPath:(id)a0 query:(id)a1;
- (void)p_sendMessageFormExtension:(id)a0 enterFrom:(id)a1;
- (void)p_sendMessageFromShortCutWithImpl:(id)a0 toconversationID:(id)a1 paths:(id)a2;
- (void)p_sendMessageWithAttachments:(id)a0 conversationID:(id)a1 enterFrom:(id)a2 paths:(id)a3 version:(id)a4 queryDict:(id)a5;
- (void)trackIMShareExtension:(id)a0 customBlock:(id /* block */)a1;
- (void)p_sendMessageFromShortCutWithImpl:(id)a0 toconversationID:(id)a1 paths_v2:(id)a2 completion:(id /* block */)a3;
- (void)p_sendMessage:(id)a0 conversationID:(id)a1 enterFrom:(id)a2 paths:(id)a3 vesion:(id)a4 queryDict:(id)a5;
- (void)p_sendMessageFromShortCutWithImpl:(id)a0 shareModel:(id)a1 paths:(id)a2;
- (void)p_sendMessageFromShortCutWithImpl:(id)a0 toConversationID:(id)a1 shareModel:(id)a2 paths_v2:(id)a3 completion:(id /* block */)a4;
- (void)transferToMessageWithCid:(id)a0;
- (void)removeShareExtensionFileIfNeeded:(id)a0;
- (void)handleShareExtensionEnterWithPath:(id)a0 query:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
