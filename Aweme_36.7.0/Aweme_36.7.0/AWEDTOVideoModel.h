@class NSString, AWEDTOAspectRatioData, NSArray, AWEDTOAIEnhanceModel;

@interface AWEDTOVideoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL videoMuted;
@property (nonatomic) BOOL isFastImportVideo;
@property (nonatomic) BOOL autoEnhanceOn;
@property (nonatomic) long long canvasType;
@property (nonatomic) BOOL needExpandCompiledSize;
@property (retain, nonatomic) AWEDTOAspectRatioData *aspectRatioData;
@property (nonatomic) long long microphoneBarState;
@property (nonatomic) BOOL isVocalMusicMixing;
@property (nonatomic) double videoFrameRatio;
@property (nonatomic) BOOL isExposureOptmize;
@property (copy, nonatomic) NSString *capturePhotoPath;
@property (nonatomic) long long autoEnhanceType;
@property (nonatomic) long long audioAecDelayTime;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL canvasEnableGesture;
@property (nonatomic) BOOL isDynamicRecorder;
@property (nonatomic) double canvasContentRatio;
@property (nonatomic) BOOL isShareComment;
@property (copy, nonatomic) NSArray *canvasColorList;
@property (nonatomic) BOOL isNewStyleShare;
@property (nonatomic) BOOL smartBeautyOn;
@property (copy, nonatomic) NSString *smartBeautyTag;
@property (copy, nonatomic) NSString *smartBeautySpecialFilterId;
@property (copy, nonatomic) NSArray *smartBeautySpecialBeautyIdList;
@property (nonatomic) BOOL smartBeautyContainPortraint;
@property (nonatomic) BOOL smartBeautyEnableFilterUrs;
@property (nonatomic) BOOL smartBeautyEnableBeautyUrs;
@property (retain, nonatomic) AWEDTOAIEnhanceModel *aiEnhanceInfo;
@property (nonatomic) double brushMaximumOffset;
@property (copy, nonatomic) NSString *originAssetCache;
@property (nonatomic) BOOL useOriginAssetCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aspectRatioDataJSONTransformer;
+ (id)aiEnhanceInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
