@class UIViewController, NSString, MMUIViewController, GCWebViewCacheConfig, MMWebViewController, GameLiteAppParam, JumpInfo;

@interface GCJumpInfo : NSObject

@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) GCWebViewCacheConfig *cacheConfig;
@property (nonatomic) BOOL popCurrentVc;
@property (retain, nonatomic) NSString *fromName;
@property (weak, nonatomic) MMWebViewController *jumpCreatedWebVc;
@property (weak, nonatomic) MMUIViewController *jumpCreatedVc;
@property (nonatomic) BOOL disableLiteAppMatch;
@property (retain, nonatomic) GameLiteAppParam *liteAppparam;
@property (retain, nonatomic) NSString *preinjectData;
@property (nonatomic) BOOL checkLimitedMode;

- (id)description;
- (void).cxx_destruct;

@end
