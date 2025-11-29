@class WxaLiteAppConfig;

@interface WxaLiteApp : NSObject

@property (retain, nonatomic) WxaLiteAppConfig *config;

+ (id)sharedInstance;

- (id)init;
- (BOOL)checkInit;
- (void)setup:(id)a0;
- (void).cxx_destruct;

@end
