@class NSString, TIMXSDKInstance;
@protocol TIMXKVStorageProtocol, TIMXInboxPullerGroupProtocol, TIMXPullerStatusChangeObserverDelegate, TIMXMessageStoreProtocol;

@interface TIMXSingleStrategyPullerDefault : NSObject <TIMXSingleStrategyPullerCommon> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) NSString *logMarkerForInit;
@property (nonatomic) BOOL fullInitFinished;
@property (copy, nonatomic) NSString *kvCursorInitedKey;
@property (copy, nonatomic) NSString *kvLocationCursorKey;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double pullStartTime;
@property unsigned long long pullerInitStatus;
@property (copy, nonatomic) NSString *pullerInitStatusKey;
@property (copy, nonatomic) NSString *kvCursorKey;
@property (copy, nonatomic) NSString *kvCmdMessageIndexKey;
@property (copy, nonatomic) NSString *kvConversationVersionKey;
@property (nonatomic) BOOL cursorInited;
@property (readonly, nonatomic) BOOL hasInitSuccess;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (retain, nonatomic) id<TIMXInboxPullerGroupProtocol> group;
@property (nonatomic) long long cursor;
@property (nonatomic) long long cmdMessageIndex;
@property (nonatomic) long long conversationVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasConversationVersionWithRootObject:(id)a0 inbox:(int)a1;
+ (id)cursorKeyForInbox:(int)a0;
+ (id)cmdMessageIndexKeyForInbox:(int)a0;
+ (id)conversationVersionKeyForInbox:(int)a0;

- (unsigned long long)initStatus;
- (void)startInit;
- (void)setNeedsPullWithReason:(long long)a0;
- (BOOL)hasInitSuccess;
- (void)finishInitWithError:(id)a0;
- (void)notifyNewMessageWithResponse:(id)a0;
- (void)pollingPull:(BOOL)a0;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (void)writeCursor;
- (void)writeCmdMessageIndex;
- (void)writeConversationVersion;
- (void)updatePullerCursorWithResponse:(id)a0;
- (long long)readCursor;
- (long long)readCmdMessageIndex;
- (long long)readConversationVersion;
- (void)fetchInitListWithCursor:(long long)a0 trackID:(id)a1;
- (void).cxx_destruct;
- (void)kickoff;

@end
