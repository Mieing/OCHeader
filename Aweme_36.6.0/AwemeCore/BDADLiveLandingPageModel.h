@class NSString, NSDictionary;

@interface BDADLiveLandingPageModel : NSObject

@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *playableURL;
@property (copy, nonatomic) NSString *gameDetailURL;
@property (copy, nonatomic) NSString *lynxScheme;
@property (copy, nonatomic) NSString *skanParameters;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSDictionary *gameBundle;
@property (copy, nonatomic) NSDictionary *complianceData;
@property (copy, nonatomic) NSDictionary *nativeSiteConfig;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (copy, nonatomic) NSDictionary *originData;
@property (nonatomic) BOOL hideNavBar;

- (void).cxx_destruct;

@end
