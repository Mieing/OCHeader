@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDASDKVideoPlayerModel : NSObject <BDASDKVideoPlayerModel>

@property (nonatomic) unsigned long long resolution;
@property (nonatomic) BOOL enableBitRateSelect;
@property (copy, nonatomic) NSString *videoid;
@property (copy, nonatomic) NSString *groupid;
@property (copy, nonatomic) NSString *itemid;
@property (copy, nonatomic) NSString *adid;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *logSubTag;
@property (copy, nonatomic) NSString *logTag;
@property (copy, nonatomic) NSDictionary *videoModel;
@property (nonatomic) BOOL disableSessionBeactive;
@property (nonatomic) BOOL disableSessionDeactive;
@property (retain, nonatomic) NSNumber *muted;
@property (retain, nonatomic) NSNumber *medialoaderEnable;
@property (retain, nonatomic) NSNumber *cacheCacheEnable;
@property (retain, nonatomic) NSNumber *cacheVideoInfoEnable;
@property (retain, nonatomic) NSNumber *scaleMode;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *preferredResolution;
@property (copy, nonatomic) NSDictionary *bmfConfig;
@property (nonatomic) long long superResolutionStatus;
@property (nonatomic) double effectivePlayTime;
@property (nonatomic) double inspirePlayTime;
@property (retain, nonatomic) NSArray *playTrackUrls;
@property (retain, nonatomic) NSArray *effectivePlayTrackUrls;
@property (retain, nonatomic) NSArray *playOverTrackUrls;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL isSendAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
