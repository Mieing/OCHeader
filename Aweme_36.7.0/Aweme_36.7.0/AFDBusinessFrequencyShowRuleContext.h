@class NSString, AWEStorage;

@interface AFDBusinessFrequencyShowRuleContext : NSObject

@property (nonatomic) long long period;
@property (nonatomic) long long count;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL uidSpecific;

- (void).cxx_destruct;

@end
