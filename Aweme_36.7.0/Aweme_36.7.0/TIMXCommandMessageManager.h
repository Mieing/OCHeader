@class NSSet, TIMXCommandMessageEventCommonHandler, TIMXCommandIntegrityManager, TIMXSDKInstance, TIMXCommandIntegrityManagerV2, TIMXCommandMessageHandler;

@interface TIMXCommandMessageManager : NSObject {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSSet *downgradeCommandsSet;
@property (retain, nonatomic) TIMXCommandMessageHandler *handler;
@property (retain, nonatomic) TIMXCommandMessageEventCommonHandler *eventCommonHandler;
@property (nonatomic) long long userID;
@property (retain, nonatomic) TIMXCommandIntegrityManager *commandIntegrityManager;
@property (retain, nonatomic) TIMXCommandIntegrityManagerV2 *commandIntegrityManagerV2;

- (id)initWithRootObject:(id)a0 userID:(long long)a1;
- (BOOL)shouldAggregateCommand:(id)a0;
- (BOOL)hasSwitchedToChainV2;
- (void)clearChainV2Record;
- (BOOL)shouldDropCommandWithMessageType:(int)a0 commandType:(long long)a1;
- (id)genreateCommandContextWithMessage:(id)a0 inInbox:(int)a1 reason:(id)a2;
- (void)handleCommandContext:(id)a0;
- (void)recordV2ChainUsage;
- (void)handleCommandMessage:(id)a0 inInbox:(int)a1 reason:(id)a2;
- (void)switchCommandChainIntegrityV1ToV2;
- (void)fallbackToV1AndClearAllV2Chain;
- (BOOL)isNormalCommandMessageWithMessage:(id)a0;
- (BOOL)isSpecialCommandMessageWithMessage:(id)a0;
- (BOOL)isUnknownCommandMessageWithMessage:(id)a0;
- (void)handleConvInfoAggregateCommands:(id)a0;
- (void).cxx_destruct;

@end
