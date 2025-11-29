@class NSString, NSDictionary;

@interface BDASplashMiniContext : NSObject

@property (copy, nonatomic) NSString *urlHost;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } splashFrame;

- (void).cxx_destruct;

@end
