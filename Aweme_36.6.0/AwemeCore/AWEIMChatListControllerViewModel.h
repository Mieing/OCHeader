@class AWEIMChatCellPreloadConfig, NSMutableDictionary, AWEIMChatListControllerContext, NSString;
@protocol AWEIMChatCellComponentConfigProtocol, IESIMMessageTabAsyncLoadProtocol;

@interface AWEIMChatListControllerViewModel : NSObject <AWEUserMessage, AWEIMChatListControllerViewModelInterface>

@property (retain, nonatomic) NSMutableDictionary *cellViewModels;
@property (retain, nonatomic) AWEIMChatCellPreloadConfig *preloadConfig;
@property (retain, nonatomic) id<AWEIMChatCellComponentConfigProtocol> cellComponentConfig;
@property (retain, nonatomic) id<IESIMMessageTabAsyncLoadProtocol> asyncLoader;
@property (weak, nonatomic) AWEIMChatListControllerContext *controllerContext;
@property (nonatomic) long long cellEntryType;
@property (retain, nonatomic) NSString *belongPageIdentifier;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)asyncLoadChatsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)asyncLoadChats:(id)a0 completion:(id /* block */)a1;
- (void)saveAsyncBuildVMs:(id)a0;
- (id)viewModelForChat:(id)a0;
- (void)configAsyncLoaderScene:(id)a0;
- (void)p_onUserPrivacySettingChange;
- (id)viewModelForConversationId:(id)a0;
- (BOOL)p_ignoreMemoryWarning;
- (void)configAsyncLoaderScene:(id)a0 enableSnapshot:(BOOL)a1;
- (void)setCellEntryTypeWithChatListEntryType:(long long)a0;
- (void)updateAllChatsDiffVersion;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;
- (void)p_clear;

@end
