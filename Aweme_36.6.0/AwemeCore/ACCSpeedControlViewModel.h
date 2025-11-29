@class ACCCameraSubscription, NSString, NSMapTable, NSMutableSet, ACCGroupedPredicate;

@interface ACCSpeedControlViewModel : NSObject <ACCSpeedControlService>

@property (copy, nonatomic) NSString *showingTips;
@property (retain, nonatomic) NSMapTable *predicates;
@property (retain, nonatomic) ACCGroupedPredicate *barItemShowPredicate;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL speedControlRealShow;
@property (retain, nonatomic) NSMutableSet *disableKeys;
@property (retain, nonatomic) NSMutableSet *hideKeys;
@property (nonatomic) BOOL speedControlButtonSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)speedControlIsShowing;
- (BOOL)isSpeedFixedOnlyByKey:(id)a0;
- (void)notificationSpeedControlShow:(BOOL)a0;
- (void)notifySpeedControlRealShowIfNeeded:(BOOL)a0;
- (id)predicateEnumerator;
- (void)notifyDisableOrHideKeysChange;
- (void)addShouldShowPrediacte:(id /* block */)a0 forHost:(id)a1;
- (void)removeShouldShowPredicate:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
