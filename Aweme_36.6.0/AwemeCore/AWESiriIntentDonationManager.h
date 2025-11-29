@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface AWESiriIntentDonationManager : NSObject

@property (retain, nonatomic) NSDate *lastBGMediaIntentDonateTime;
@property (nonatomic) unsigned long long strategy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *donateQueue;

+ (id)sharedInstance;

- (BOOL)checkDonateFrequencyForType:(unsigned long long)a0;
- (void)processSiriIntentsModel:(id)a0 intentType:(unsigned long long)a1;
- (void)makeIntent:(id)a0 intentType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)makeEnableBGPlayPlayMediaIntent:(id)a0 completion:(id /* block */)a1;
- (void)makeDisableBGPlayMediaIntent:(id)a0 completion:(id /* block */)a1;
- (void)makeOpenPageIntent:(id)a0 completion:(id /* block */)a1;
- (void)buildCustomIntentWithImageURL:(id)a0 alternativeURLs:(id)a1 builder:(id /* block */)a2 completion:(id /* block */)a3;
- (void)donateIntentWithType:(id)a0 siriIntentsModel:(id)a1 extraTrackParams:(id)a2;
- (void)deleteIntentWithItemIdentifier:(id)a0;
- (void)deleteIntentsWithSceneType:(id)a0;
- (void)deleteAllIntents;
- (void).cxx_destruct;
- (id)init;

@end
