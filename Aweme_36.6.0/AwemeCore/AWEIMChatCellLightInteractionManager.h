@class NSString, NSMutableDictionary;

@interface AWEIMChatCellLightInteractionManager : NSObject <AWEIMChatCellLightInteractionManagerInterface>

@property (class, readonly, nonatomic) AWEIMChatCellLightInteractionManager *sharedInstance;
@property (class, readonly, copy, nonatomic) NSString *defaultSource;

@property (retain, nonatomic) NSMutableDictionary *demoteControllerDictionary;
@property (nonatomic) unsigned long long globalStatusCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)baseCheckShouldShowLightInteractionWithChat:(id)a0;
+ (BOOL)isCompanyAccount:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)demoteContextWithConversationID:(id)a0;
- (void)demoteWithConversationID:(id)a0;
- (id)createDemoteContextWithConversationID:(id)a0 globalIndex:(long long)a1;
- (void)checkExposedIfNeededWithConversationID:(id)a0;
- (void)willEnterMessageTab;
- (BOOL)checkLastestMsgShouldDemoteWithChat:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
