@class NSString, NSMapTable, DVEMultipleTrackView, NSHashTable, DVETrackPanelContext, NSMutableArray, DVEMultipleTrackAudioViewModel;
@protocol DVEMultipleTrackControllerDelegate;

@interface DVEMultipleTrackController : NSObject <DVEMulitpleTrackViewServiceProtocol>

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (retain, nonatomic) NSMutableArray *viewModelContainers;
@property (retain, nonatomic) NSMapTable *viewModelTable;
@property (retain, nonatomic) NSHashTable *subscriberHashTable;
@property (retain, nonatomic) DVEMultipleTrackView *trackView;
@property (retain, nonatomic) DVEMultipleTrackAudioViewModel *audioViewModel;
@property (weak, nonatomic) id<DVEMultipleTrackControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findSlotsInSameUITrackLevelWithSlotUUID:(id)a0 forType:(unsigned long long)a1;
- (void)registerViewModel:(id)a0 forType:(unsigned long long)a1;
- (id)viewModelForType:(unsigned long long)a0;
- (id)multipleTrackViewModelMap;
- (id)currentMultipleTrackViewModel;
- (void)scrollCurrentClipCellToTop;
- (void)scrollCurrentClipCellToNormal;
- (void)recalculateTrackData;
- (void)updateWithMultipleTrackMode:(unsigned long long)a0 hidden:(BOOL)a1;
- (void)p_registerService;
- (void)setUpObserve;
- (id)viewModelOfMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)hide;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)scrollToBottom;

@end
