@class NSString, TIMXSDKInstance;
@protocol TIMXDBConversationORMUpdateContextProtocol;

@interface TIMXDBConversationORMUpdater : NSObject <TIMXDBConversationORMUpdaterProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXDBConversationORMUpdateContextProtocol> context;
@property (nonatomic) BOOL didUpdateConv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateBoxTypeMask:(long long)a0;
- (BOOL)updateProcessedUnreadCount:(long long)a0;
- (BOOL)updateUnreadNeglectMask:(long long)a0;
- (id)initWithContext:(id)a0 rootObject:(id)a1;
- (BOOL)updateBelongedAcquaintanceType:(long long)a0;
- (BOOL)updateLastHintMessageIdentifier:(id)a0;
- (BOOL)updateLastMessageIdentifier:(id)a0;
- (BOOL)updateLastMsgCreateTime:(id)a0;
- (BOOL)updateLocalInfoDictionary:(id)a0;
- (BOOL)updateBottomConversation:(BOOL)a0;
- (void).cxx_destruct;

@end
