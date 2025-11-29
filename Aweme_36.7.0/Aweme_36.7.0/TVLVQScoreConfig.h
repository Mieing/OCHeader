@class NSString;

@interface TVLVQScoreConfig : NSObject

@property (nonatomic) int enabled;
@property (nonatomic) int interval;
@property (nonatomic) int cancel;
@property (copy, nonatomic) NSString *cfgReason;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
