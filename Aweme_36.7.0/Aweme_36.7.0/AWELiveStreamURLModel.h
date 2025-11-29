@class AWELiveRoomCoreSDKData, NSString, NSDictionary, NSArray, AWELivePlaySetting, AWELiveStreamExtraInfoModel, NSNumber;

@interface AWELiveStreamURLModel : AWEBaseApiModel

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *rtmpPullURL;
@property (copy, nonatomic) NSString *rtmpPushURL;
@property (nonatomic) unsigned long long provider;
@property (copy, nonatomic) NSDictionary *flvPullUrl;
@property (copy, nonatomic) NSArray *candidateResolution;
@property (copy, nonatomic) NSString *defaultResolution;
@property (retain, nonatomic) AWELiveRoomCoreSDKData *liveCoreSdkData;
@property (copy, nonatomic) NSDictionary *pullDatas;
@property (retain, nonatomic) AWELivePlaySetting *play;
@property (retain, nonatomic) AWELiveStreamExtraInfoModel *extra;
@property (retain, nonatomic) NSNumber *streamOrientation;
@property (nonatomic) long long vrType;

+ (id)extraJSONTransformer;
+ (id)playJSONTransformer;
+ (id)providerJSONTransformer;
+ (id)liveCoreSdkDatalJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isPanoramaVR;
- (id)liveStreamURLModel;
- (id)originPullURL;
- (id)streamUrlWithName:(id)a0;
- (BOOL)isLandscapeLive;
- (void).cxx_destruct;

@end
