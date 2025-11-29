@class NSString, NSMutableDictionary, NSMutableSet;

@interface AWEFeedSiriDonateServiceImpl : HTSService <AWEFeedSiriDonateService>

@property (nonatomic) BOOL enableSiriDonate;
@property (nonatomic) long long countLimit;
@property (nonatomic) BOOL needInteraction;
@property (nonatomic) BOOL needMoreDonation;
@property (retain, nonatomic) NSMutableDictionary *interactionRecord;
@property (retain, nonatomic) NSMutableSet *playRecod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canDonateToday;
- (BOOL)enableSiriDonateForFeed;
- (void)triggerDonateFromFeedWithAwemeID:(id)a0;
- (BOOL)enableSiriDonateForFeedWithInteraction;
- (void)triggerDonateFromType:(unsigned long long)a0 withAwemeID:(id)a1;
- (BOOL)enableSiriDonateForMoreScene;
- (void)triggerDonateFromSlienSilentPush;
- (id)keyForToday;
- (void)donateWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
