@class NSString, NSDate;

@interface AWEKnowledgeRichContentImpl.PFMPromptConfig : NSObject {
    void /* function */ timeZoneID;
}

@property (nonatomic) long long cooldownDays;
@property (nonatomic) long long lifetimeMaxShows;
@property (nonatomic) long long requiredEventsPerDay;
@property (nonatomic, copy) NSString *timeZoneID;
@property (nonatomic) long long debounceMilliseconds;
@property (nonatomic) BOOL exactHitOnThreshold;
@property (nonatomic, retain) NSDate *testNowDate;

- (id)initWithCooldownDays:(long long)a0 lifetimeMaxShows:(long long)a1 requiredEventsPerDay:(long long)a2 timeZoneID:(id)a3 debounceMilliseconds:(long long)a4 exactHitOnThreshold:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;

@end
