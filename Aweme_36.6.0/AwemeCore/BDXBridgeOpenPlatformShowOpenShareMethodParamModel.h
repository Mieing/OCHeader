@class NSString, BDXBridgeOpenPlatformShowOpenShareStickersObject, BDXBridgeOpenPlatformShowOpenShareTitleObject, BDXBridgeOpenPlatformShowOpenShareMusicParamObject, BDXBridgeOpenPlatformShowOpenShareEffectObject, BDXBridgeOpenPlatformShowOpenShareMicroAppInfo, BDXBridgeOpenPlatformShowOpenShareDailyParam, BDXBridgeOpenPlatformShowOpenShareAnchorInfo, NSNumber, BDXBridgeOpenPlatformShowOpenShareMediaContent;

@interface BDXBridgeOpenPlatformShowOpenShareMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *shareToType;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *feature;
@property (retain, nonatomic) NSNumber *shareToPublish;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareMediaContent *mediaContent;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareMicroAppInfo *microAppInfo;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareAnchorInfo *anchorInfo;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareTitleObject *titleObject;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareStickersObject *stickersObject;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareMusicParamObject *musicParamObject;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareEffectObject *effectObject;
@property (retain, nonatomic) BDXBridgeOpenPlatformShowOpenShareDailyParam *dailyParam;
@property (nonatomic) long long privateStatus;
@property (nonatomic) long long downloadType;

+ (id)requiredKeyPaths;
+ (id)anchorInfoJSONTransformer;
+ (id)mediaContentJSONTransformer;
+ (id)microAppInfoJSONTransformer;
+ (id)titleObjectJSONTransformer;
+ (id)stickersObjectJSONTransformer;
+ (id)musicParamObjectJSONTransformer;
+ (id)effectObjectJSONTransformer;
+ (id)dailyParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
