@class NSError;

@interface BDASplashMiniStatusInfoModel : NSObject

@property (nonatomic) long long displayTimeMs;
@property (nonatomic) long long errorType;
@property (nonatomic) long long releaseScene;
@property (retain, nonatomic) NSError *requestError;

- (void).cxx_destruct;

@end
