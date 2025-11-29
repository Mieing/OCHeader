@class NSString;

@interface BDPNativeAppContext : BDPBaseContext

@property (copy, nonatomic) NSString *currentPagePath;
@property (copy, nonatomic) NSString *currentPageQuery;

- (void).cxx_destruct;

@end
