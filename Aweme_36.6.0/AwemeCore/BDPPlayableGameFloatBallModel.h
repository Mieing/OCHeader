@class NSString;

@interface BDPPlayableGameFloatBallModel : NSObject

@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) int timeoutSec;

- (void).cxx_destruct;

@end
