@class NSString, NSMutableArray, NSMutableDictionary;

@interface HunterAbilityInfo : NSObject

@property (nonatomic) BOOL abilityStatus;
@property (copy, nonatomic) NSString *abilityKey;
@property (retain, nonatomic) NSMutableArray *logList;
@property (retain, nonatomic) NSMutableDictionary *abilityConfig;

+ (id)initWithZero:(id)a0;

- (void)pushLogList:(id)a0;
- (void).cxx_destruct;

@end
