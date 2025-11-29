@class NSArray, NSString, IESLiveGiftStorageSelectedGuest, NSDictionary, NSMutableArray, BDXBridgeEventSubscriber;
@protocol IESLiveGroupLiveAPI, IESLiveGiftRecipientViewUpdateProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftRecipientViewModel : NSObject <IESLiveSocialInteractAction, HTSLiveMessageSubscriber, IESLiveGiftRecipientSubInterface>

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveGroupLiveAPI> groupLiveAPI;
@property (retain, nonatomic) NSMutableArray *groupLiveMembersArray;
@property (retain, nonatomic) NSArray *selectedRecipients;
@property (nonatomic) BOOL isAllMic;
@property (retain, nonatomic) IESLiveGiftStorageSelectedGuest *forwardlyMemoryStorageSelectdGuest;
@property (retain, nonatomic) NSString *recommendRecipientID;
@property (retain, nonatomic) NSDictionary *recommendRecipientLogExtra;
@property (retain, nonatomic) NSDictionary *defaultGuestInfoLogExtra;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL isLynxPageOpen;
@property (nonatomic) BOOL isAggregateTimerWorking;
@property (nonatomic) long long aggregateDuration;
@property (weak, nonatomic) id<IESLiveGiftRecipientViewUpdateProtocol> delegate;
@property (nonatomic) BOOL enableFixSelectedRecipientsUpdate;
@property (copy, nonatomic) id /* block */ showRecipientListView;
@property (copy, nonatomic) id /* block */ updateRecipientListView;
@property (copy, nonatomic) id /* block */ recipientViewStatusChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setRecipients:(id)a0 allMic:(BOOL)a1 useDefaultWhenEmpty:(BOOL)a2;
- (void)manualChangeFromRecipient:(id)a0 fromAllMic:(BOOL)a1 toRecipient:(id)a2 toAllMic:(BOOL)a3;
- (void)refreshSpecifiedUserOnGuildGameMode:(id)a0;
- (void)setSpecialRecommendRecipientWithID:(id)a0 logExtra:(id)a1 completion:(id /* block */)a2;
- (void)removeSpecialRecommendRecipient;
- (id)lastDefaultGuestInfoLogExtra;
- (id)groupLiveMemberRecipientList;
- (void)subscribeEvent;
- (void)updateRecipientListViewIfNeed;
- (void)updateAllMic:(BOOL)a0;
- (void)recordSelectedRecipients:(id)a0 allMic:(BOOL)a1 actionType:(unsigned long long)a2;
- (id /* block */)showGuestListViewBlock;
- (void)updateAllMicSelectedRecipients:(id)a0;
- (void)fetchGroupLiveDataIfNeeded;
- (id)specifiedUserForGuildMode;
- (BOOL)isSelectGuestLynxPageOpen;
- (BOOL)shouldShowRecipientView;
- (void)setUpSendEventConfig;
- (id)groupLiveDefaultRecipients;
- (id)normalDefaultRecipients;
- (id)p_lastRecordStorageSelectedGroupLiveRecipients;
- (id)p_lastRecordStorageSelectedRecipients;
- (id)currentSpecialRecommendRecipient;
- (id)selectedGroupLiveRecipientKey;
- (id)selectedRecipientKey;
- (id)defaultRecipients;
- (BOOL)defaultAllMic;
- (id)selectedSpecifiedRecipientKey;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
