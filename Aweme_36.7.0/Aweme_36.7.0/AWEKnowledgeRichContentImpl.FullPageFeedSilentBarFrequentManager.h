@interface AWEKnowledgeRichContentImpl.FullPageFeedSilentBarFrequentManager : NSObject {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ namespace;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ config;
}

- (void)setTestNowDate:(id)a0;
- (id)initWithNamespace:(id)a0 storage:(id)a1 config:(id)a2 logger:(id)a3 tag:(id)a4;
- (BOOL)processEventWithName:(id)a0 object:(id)a1;
- (BOOL)processDefaultEvent;
- (id)statusForEventName:(id)a0;
- (id)statusForDefaultEvent;
- (void)updateConfigWithCooldownDays:(id)a0 lifetimeMaxShows:(id)a1 requiredEventsPerDay:(id)a2 timeZoneID:(id)a3 debounceMilliseconds:(id)a4 exactHitOnThreshold:(id)a5;
- (void)resetEventCountersWithName:(id)a0;
- (void)resetAll;
- (void).cxx_destruct;
- (id)init;

@end
