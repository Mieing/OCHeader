@class AWEBottomContainerTrackManager, NSString, NSMutableDictionary, AWEAwemeModel, NSPointerArray, NSNumber, AWEBaseElement;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractiveBottomContainerFilterHandler : NSObject <AWEPlayInteractionContainerFilterProtocol>

@property (retain, nonatomic) NSMutableDictionary *priorityElementDic;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSPointerArray *currentAppearElements;
@property (retain, nonatomic) NSNumber *currentShownPriority;
@property (retain, nonatomic) AWEBottomContainerTrackManager *trackManager;
@property (readonly, weak, nonatomic) AWEBaseElement *currentShownElement;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTopAppearElementAndHideOthers:(id)a0;
- (void)filterElementAppearWithModel:(id)a0 referString:(id)a1;
- (void)bizDowngradeLayoutElementView:(id)a0;
- (void)addElementInPriorityDic:(id)a0;
- (void)updateElementStatus:(long long)a0 ignoreElement:(id)a1 before:(id /* block */)a2 appear:(id /* block */)a3 shouldAppear:(id /* block */)a4;
- (id)getPriorityWithElement:(id)a0;
- (id)getAppearElementWithModel:(id)a0 elements:(id)a1 shouldSetAppear:(BOOL)a2 ignoreElement:(id)a3;
- (void)resetElement:(id)a0;
- (void)checkElementStatus:(id)a0 model:(id)a1 appear:(id /* block */)a2 disappear:(id /* block */)a3 completion:(id /* block */)a4;
- (void)addObjectInArray:(id)a0 forKey:(id)a1 dictionary:(id)a2;
- (id)intersectionArray:(id)a0 compareArray:(id)a1;
- (BOOL)hasIntersectionArray:(id)a0 compareArray:(id)a1;
- (void)addElement:(id)a0;
- (void).cxx_destruct;
- (void)resetData;

@end
