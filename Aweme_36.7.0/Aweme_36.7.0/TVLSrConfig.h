@class NSString;

@interface TVLSrConfig : NSObject

@property (nonatomic) int enabled;
@property (nonatomic) long long scaleType;
@property (nonatomic) long long sharpLevel;
@property (nonatomic) int delay;
@property (copy, nonatomic) NSString *cfgReason;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;

@end
