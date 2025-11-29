@class NSArray, NSString, NSMutableDictionary;

@interface APBToygerCollect : NSObject

@property (nonatomic) long long retry;
@property (nonatomic) double minangle;
@property (nonatomic) double maxangle;
@property (nonatomic) double near;
@property (nonatomic) double far;
@property (nonatomic) long long minlight;
@property (nonatomic) long long time;
@property (nonatomic) long long light;
@property (nonatomic) long long imageIndex;
@property (nonatomic) BOOL uploadLivePic;
@property (nonatomic) long long uploadMonitorPic;
@property (nonatomic) BOOL progressbar;
@property (nonatomic) BOOL uploadBestPic;
@property (nonatomic) BOOL uploadPoseOkPic;
@property (nonatomic) BOOL uploadBigPic;
@property (nonatomic) BOOL authorization;
@property (nonatomic) long long mineDscore;
@property (nonatomic) long long mineVideo;
@property (retain, nonatomic) NSArray *actionMode;
@property (nonatomic) long long pageNo;
@property (copy, nonatomic) NSString *docType;
@property (nonatomic) long long retryLimit;
@property (nonatomic) long long scanTimeout;
@property (copy, nonatomic) NSString *uiType;
@property (copy, nonatomic) NSString *docInputMode;
@property (nonatomic) double docUIRatio;
@property (copy, nonatomic) NSString *multiLangVer;
@property (retain, nonatomic) NSMutableDictionary *chameleon;
@property (nonatomic) long long captureFrameLimit;

+ (id)defaulConfig;

- (void).cxx_destruct;

@end
