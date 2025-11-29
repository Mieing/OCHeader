@class HTSLiveToolbarItem, NSString;
@protocol IESLiveRoomService, IESLiveRecordeEntranceGuardDelegate;

@interface IESLiveRecordEntranceGuard : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSLiveToolbarItem *portraitRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeScreenRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *anchorScreenRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *portraitScreenBackRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeBackRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *anchorBackRecordItem;
@property (retain, nonatomic) HTSLiveToolbarItem *portraitScreenCombinedItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeCombinedItem;
@property (retain, nonatomic) HTSLiveToolbarItem *anchorCombinedItem;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isFirstLoaded;
@property (weak, nonatomic) id<IESLiveRecordeEntranceGuardDelegate> delegate;
@property (copy, nonatomic) id /* block */ onScreenRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onBackRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onCombineRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onScreenRecordItemTapped;
@property (copy, nonatomic) id /* block */ onBackRecordItemTapped;
@property (copy, nonatomic) id /* block */ onCombineRecordItemTapped;
@property (copy, nonatomic) id /* block */ onAudienceScreenRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onAudienceBackRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onAudienceScreenRecordItemTapped;
@property (copy, nonatomic) id /* block */ onAudienceBackRecordItemTapped;
@property (copy, nonatomic) id /* block */ onLandscapeBackRecordItemDisplay;
@property (copy, nonatomic) id /* block */ onLandscapeBackRecordItemTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableRecord;
- (BOOL)enableAudienceBackRecord;
- (BOOL)shouldCombineRecordEntry:(BOOL)a0;
- (id)backRecordEntryImageName;
- (BOOL)enableAnchorBackRecord;
- (BOOL)enableAnchorLongpress;
- (void)registerLongPressGesture;
- (void)registerAnchorGuideLiveTimeObserver;
- (void)reloadSeparateEntry:(BOOL)a0;
- (BOOL)adminAllowRecord;
- (BOOL)isDouyinAdmin;
- (void)clearRecordScreenEntry;
- (void)clearBackRecordEntry;
- (void)reloadRecordItemIfOrientationChanged:(BOOL)a0;
- (void)loadCombinedRecordEntry;
- (void)loadAudienceMoreToolsRecordItem;
- (void)loadScreenRecordItem:(BOOL)a0;
- (void)loadScreenBackRecordItem;
- (void)loadLandscapeScreenBackRecordInMore;
- (void)loadAudienceMoreToolsBackRecordItem;
- (id)combinedEntryImageName:(BOOL)a0;
- (BOOL)isLongPressedInPopupView:(id)a0;
- (void)addObserverForMessage;
- (BOOL)isCombinedEntry;
- (void)loadScreenRecordEntry;
- (void)loadBackRecordEntry;
- (void)clearCombinedRecordEntry;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAnchor;
- (void)messageReceived:(id)a0;
- (BOOL)isAdmin;
- (void)reloadCombinedEntry;

@end
