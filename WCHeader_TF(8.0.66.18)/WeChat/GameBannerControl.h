@class NSString;

@interface GameBannerControl : WXPBGeneratedMessage

@property (nonatomic) BOOL disable;
@property (retain, nonatomic) NSString *webviewUrl;
@property (nonatomic) BOOL disablePreload;

+ (void)initialize;

- (void)setDisablePreload:(BOOL)a0;
- (BOOL)disablePreload;
- (void)setWebviewUrl:(id)a0;
- (id)webviewUrl;
- (void)setDisable:(BOOL)a0;
- (BOOL)disable;

@end
