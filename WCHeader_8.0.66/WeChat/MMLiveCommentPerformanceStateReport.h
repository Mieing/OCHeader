@interface MMLiveCommentPerformanceStateReport : NSObject

@property (nonatomic) long long state;
@property (nonatomic) unsigned long long normalModeAllKeepSeconds;
@property (nonatomic) unsigned long long smoothModeAllKeepSeconds;

+ (id)createDefaultStateReport:(long long)a0;

- (void)increaseNormalModeAllKeepSeconds;
- (void)increaseSmoothModeAllKeepSeconds;

@end
