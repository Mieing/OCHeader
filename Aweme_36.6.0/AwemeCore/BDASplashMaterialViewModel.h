@class NSNumber, NSString, NSDictionary, NSArray, BDASplashImageInfoModel, BDASplashVideoInfoModel;

@interface BDASplashMaterialViewModel : NSObject

@property (copy, nonatomic) NSString *splashID;
@property (nonatomic) unsigned long long materialType;
@property (retain, nonatomic) BDASplashImageInfoModel *imageModel;
@property (retain, nonatomic) BDASplashVideoInfoModel *videoModel;
@property (copy, nonatomic) NSDictionary *moduleInfo;
@property (copy, nonatomic) NSDictionary *hotSplashFilterInfo;
@property (nonatomic) BOOL isRemoteVideo;
@property (nonatomic) BOOL repeats;
@property (nonatomic) double displayTime;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *displayDensity;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSDictionary *backgroundArea;
@property (copy, nonatomic) NSDictionary *materialArea;
@property (copy, nonatomic) NSArray *showTrackURLs;
@property (copy, nonatomic) NSArray *playTrackURLs;
@property (copy, nonatomic) NSArray *playOverTrackURLs;
@property (nonatomic) BOOL useRealTime;
@property (copy, nonatomic) NSString *realTimeLogExtra;
@property (nonatomic) long long resourceLoadType;
@property (nonatomic) long long modelType;
@property (retain, nonatomic) NSNumber *showExpected;

- (BOOL)isGif;
- (id)initWithSplashModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVideo;

@end
