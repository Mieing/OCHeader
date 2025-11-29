@class NSString;

@interface WADebugSkylineOptions : NSObject

@property (retain, nonatomic) NSString *appId;

+ (id)getDebugSkylineOptionName:(long long)a0;

- (id)initWithAppId:(id)a0;
- (id)keyWithOption:(long long)a0;
- (void)setWithOption:(long long)a0 val:(BOOL)a1;
- (BOOL)getWithOption:(long long)a0;
- (void).cxx_destruct;

@end
