@class NSString;

@interface BDMapViewCommonConfig : NSObject

@property (copy, nonatomic) NSString *apiKey;
@property (nonatomic) BOOL isAMap;
@property (nonatomic) BOOL isAgreePrivacy;

+ (void)registerAMapService:(id)a0;
+ (void)updateAMapPrivacy:(BOOL)a0;
+ (id)sharedInstance;

- (void)activateAMapService;
- (void)activateAMapService;
- (void)useAMap;
- (void)useSystemMap;
- (void).cxx_destruct;

@end
