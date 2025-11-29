@class NSString, AWEStorage;

@interface AFDBusinessFrequencyExitRuleContext : NSObject

@property (nonatomic) long long count;
@property (nonatomic) long long unavailableDay;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long totalCountUnavailableDay;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL uidSpecific;

- (void).cxx_destruct;

@end
