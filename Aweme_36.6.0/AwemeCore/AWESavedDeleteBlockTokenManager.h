@class NSString;

@interface AWESavedDeleteBlockTokenManager : NSObject

@property (copy, nonatomic) NSString *latestToken;
@property (nonatomic) double cancelTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setToken:(id)a0;

@end
