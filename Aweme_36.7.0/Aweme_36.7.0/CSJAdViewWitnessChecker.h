@class NSObject, BUThreadSafeDictionary, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CSJAdViewWitnessChecker : NSObject

@property (retain, nonatomic) BUThreadSafeDictionary *viewTrackers;
@property (retain, nonatomic) NSMutableDictionary *adViewsWitnessTimeDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;

+ (id)dictionaryKeyWithObject:(id)a0;
+ (double)getWitnessTimeForAd:(id)a0;
+ (void)setWitnessTimeForAd:(id)a0;
+ (id)sharedInstance;

- (void)checkAdViewsIfWitnessed;
- (void)checkoutViewTracker;
- (void)showEventWithTracker:(id)a0;
- (void)dismissEventWithTracker:(id)a0;
- (void)removeAd:(id)a0;
- (void)addViewTracker:(id)a0;
- (void)addViewTracker:(id)a0 ForKey:(id)a1;
- (void)removeAdForKey:(id)a0;
- (void).cxx_destruct;

@end
