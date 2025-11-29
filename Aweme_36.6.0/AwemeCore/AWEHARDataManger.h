@class NSDictionary;
@protocol AWEHARServiceManager;

@interface AWEHARDataManger : NSObject

@property (retain, nonatomic) NSDictionary *ABConfig;
@property (retain, nonatomic) NSDictionary *predictResult;
@property (retain, nonatomic) NSDictionary *conversionResult;
@property (nonatomic) BOOL engineHasSet;
@property (retain, nonatomic) id<AWEHARServiceManager> harService;
@property (nonatomic) BOOL isPredicting;

+ (id)sharedInstance;

- (void)startPredicting;
- (void)stopPredicting;
- (id)getLastResult;
- (BOOL)isHAREnable;
- (id)awe_HARTrackParams;
- (void)trackHarData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getStatus;

@end
