@class NSString;

@interface TVLAesBoostConfig : NSObject

@property (nonatomic) int enabled;
@property (nonatomic) int groupId;
@property (nonatomic) int delay;
@property (copy, nonatomic) NSString *cfgReason;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
