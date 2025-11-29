@class NSString;

@interface HunterLogInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) unsigned long long abilityType;

+ (id)initLogInfo:(id)a0 value:(id)a1 type:(unsigned long long)a2 abilityType:(unsigned long long)a3;

- (void).cxx_destruct;

@end
