@class NSString;

@interface TVLSharpenConfig : NSObject

@property (nonatomic) int enabled;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *cfgReason;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
