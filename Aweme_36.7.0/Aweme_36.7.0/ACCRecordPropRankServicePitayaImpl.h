@class NSString, NSHashTable, ACCRecordPropRankPitayaInput, NSMutableArray;
@protocol ACCSideslipPropPanelPickViewCapability, IESServiceProvider;

@interface ACCRecordPropRankServicePitayaImpl : NSObject <ACCRecordPropRankService>

@property (copy, nonatomic) NSString *creationId;
@property (retain, nonatomic) ACCRecordPropRankPitayaInput *input;
@property (nonatomic) BOOL isListening;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (retain, nonatomic) NSMutableArray *propList;
@property (retain, nonatomic) NSString *maxShownPropId;
@property (nonatomic) unsigned long long maxShownPosition;
@property (retain, nonatomic) NSString *lastSelectPropId;
@property (nonatomic) unsigned long long lastSelectPosition;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelPickViewCapability> sideslipPickViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propShow:(id)a0;
- (void)updatePropList:(id)a0;
- (void)propSelected:(id)a0;
- (void)trackRerankFinishWithParams:(id)a0;
- (void)updateMaxShownPosition:(id)a0;
- (id)initWithCreationId:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)startListen;

@end
