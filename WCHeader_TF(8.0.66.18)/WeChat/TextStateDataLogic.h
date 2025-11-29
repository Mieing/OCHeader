@class NSRecursiveLock, NSMutableDictionary, TextStateDBTransfer, NSString, NSObject, OrderedDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, TextStateDataLogicDelegate;

@interface TextStateDataLogic : NSObject <IContactMgrExt, IUpdateProfileMgrExt, TextStateDBTransferDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSRecursiveLock *recursiveLock;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) OrderedDictionary *orderedIdToTextState;
@property BOOL dataLoaded;
@property BOOL affDataLoaded;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *expireTimer;
@property (retain, nonatomic) TextStateDBTransfer *dbTransfer;
@property (nonatomic) BOOL useAffDB;
@property (nonatomic) BOOL affDBFinishTransfer;
@property (weak, nonatomic) id<TextStateDataLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)insertOrUpdateTextState:(id)a0 forOrderedIdToTextState:(id)a1 index:(unsigned long long *)a2;
+ (BOOL)isTextStateValidForUsername:(id)a0;
+ (id)generateTextStateFromContact:(id)a0;
+ (id)generateTextStateFromContactWithUsername:(id)a0;

- (id)init;
- (BOOL)isDataLoaded;
- (void)dealloc;
- (void)addOrModifyTextState:(id)a0 checkSequence:(BOOL)a1;
- (void)deleteTextStateForId:(id)a0;
- (void)deleteTextStateForId:(id)a0 sequence:(unsigned int)a1;
- (void)deleteTextStateForUsername:(id)a0 sequence:(unsigned int)a1;
- (id)textStateForId:(id)a0;
- (id)textStateListForUsername:(id)a0;
- (id)mostRecentTextStateForUsername:(id)a0;
- (id)usernameToTextState;
- (void)constructCacheIfNeeded;
- (void)constructCache;
- (void)constructCacheInAffDB;
- (id)entryForUsername:(id)a0;
- (void)onTextStateUpdateForUsername:(id)a0;
- (void)prefetchTextState:(id)a0;
- (void)restartExpireTimer;
- (void)checkExpire;
- (void)checkAffExpire;
- (BOOL)affStatusMainDBTransferFinish;
- (BOOL)useAffdb;
- (void)doAffModTextStatueFinish:(id)a0;
- (void)privateUpdateContact:(id)a0;
- (void)handleUpdateContact:(id)a0;
- (void)didBecomeActive;
- (void)onContactListUpdate:(unsigned int)a0;
- (void)onNewContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onRemoveContactFromAddressBook:(id)a0;
- (void)onProfileChange;
- (void)onTextStateTransferFinish;
- (void).cxx_destruct;

@end
