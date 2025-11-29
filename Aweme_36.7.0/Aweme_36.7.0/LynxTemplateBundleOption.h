@class NSString;

@interface LynxTemplateBundleOption : NSObject

@property (nonatomic) int contextPoolSize;
@property (nonatomic) BOOL enableContextAutoRefill;
@property (retain, nonatomic) NSString *url;

- (void).cxx_destruct;

@end
