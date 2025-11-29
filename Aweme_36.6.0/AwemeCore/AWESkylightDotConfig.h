@class NSString;

@interface AWESkylightDotConfig : NSObject

@property (nonatomic) long long dotType;
@property (copy, nonatomic) NSString *dotText;
@property (nonatomic) BOOL shouldShowDot;

- (long long)getDotShowDuration;
- (void).cxx_destruct;

@end
