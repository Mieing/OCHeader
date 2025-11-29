@class NSString, UIViewController, UIColor;

@interface GCWebViewCacheConfig : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *customDataStr;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (nonatomic) double webviewHeight;
@property (nonatomic) BOOL isHalfScreen;
@property (retain, nonatomic) NSString *reuseIndentifier;
@property (nonatomic) BOOL reCreateAfterUsed;
@property (retain, nonatomic) UIColor *backGroundColor;
@property (retain, nonatomic) NSString *preinjectData;
@property (nonatomic) BOOL checkLimitedMode;

- (void).cxx_destruct;

@end
