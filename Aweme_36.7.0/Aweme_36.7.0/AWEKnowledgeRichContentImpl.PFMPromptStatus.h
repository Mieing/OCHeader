@class NSDate;

@interface AWEKnowledgeRichContentImpl.PFMPromptStatus : NSObject

@property (nonatomic, readonly) BOOL canShowNow;
@property (nonatomic, readonly) long long totalShown;
@property (nonatomic, readonly) NSDate *lastShowDate;
@property (nonatomic, readonly) long long remainingEventsToday;
@property (nonatomic, readonly) NSDate *nextEligibleByCooldown;
@property (nonatomic, readonly) long long lifetimeMaxShows;

- (id)initWithCanShowNow:(BOOL)a0 totalShown:(long long)a1 lastShowDate:(id)a2 remainingEventsToday:(long long)a3 nextEligibleByCooldown:(id)a4 lifetimeMaxShows:(long long)a5;
- (void).cxx_destruct;
- (id)init;

@end
