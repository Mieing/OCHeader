@class NSString, NSArray, ACCDraftURS;

@interface AWEPictureToVideoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *propID;
@property (copy, nonatomic) NSArray *stickerTextArray;
@property (copy, nonatomic) NSArray *arTextArray;
@property (copy, nonatomic) NSArray *challengeInfos;
@property (copy, nonatomic) NSString *inheritCustomStickerId;
@property (copy, nonatomic) NSString *customStickerId;
@property (copy, nonatomic) NSString *customizedBusinessExtra;
@property (copy, nonatomic) NSString *currentCustomPropExportPath;
@property (copy, nonatomic) NSString *currentCustomPropIconExportPath;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropExportURS;
@property (retain, nonatomic) ACCDraftURS *currentCustomPropIconExportURS;
@property (copy, nonatomic) NSString *propExportTaskId;
@property (nonatomic) long long editPageButtonStyle;
@property (nonatomic) BOOL beautifyUsed;
@property (nonatomic) BOOL composerBeautifyUsed;
@property (copy, nonatomic) NSString *composerBeautifyInfo;
@property (copy, nonatomic) NSString *composerBeautifyEffectInfo;
@property (copy, nonatomic) NSString *colorFilterName;
@property (copy, nonatomic) NSString *colorFilterId;
@property (nonatomic) BOOL hasDeselectionBeenMadeRecently;
@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSString *welfareActivityID;
@property (copy, nonatomic) NSString *filterSelectSource;
@property (nonatomic) unsigned long long cameraFlashMode;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (copy, nonatomic) NSString *recordUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)challengeInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPic2VideoInfo:(id)a0;
- (id)pic2VideoInfo;
- (void).cxx_destruct;

@end
