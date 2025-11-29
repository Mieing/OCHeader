@class NSString;

@interface AWECnryphoctConfig : NSObject

@property (readonly, nonatomic) NSString *secret;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *channel;
@property (nonatomic) BOOL enableTTNet;
@property (nonatomic) BOOL needConfigSelas;
@property (retain, nonatomic) NSString *appName;

+ (id)configWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;

@end
