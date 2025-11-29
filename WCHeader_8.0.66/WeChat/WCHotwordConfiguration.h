@class NSString;

@interface WCHotwordConfiguration : NSObject

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *hotword;

+ (id)configurationWithFinderHotwordConfiguration:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
