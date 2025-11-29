@class APCDTOStickerInfoExtra, NSDictionary, APCDTOTmpYuanDanConfig, APCDTOIMInfo, APCDTODyliteRedPacket, NSString, APCDTOApiParameterAppender, APCDTOBizDataExtension, APCDTOActivity, NSArray, APCDTOTmpChunJieConfig, APCDTOPoiInfo, NSNumber, APCDTOThemeConfig;

@interface APCDTOBizData : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (nonatomic) long long videoSource;
@property (nonatomic) long long draftSavePolicy;
@property (retain, nonatomic) NSDictionary *unmodifiablePublishParams;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL imagePreferred;
@property (retain, nonatomic) NSNumber *nowPostType;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (nonatomic) BOOL needUniqueTaskID;
@property (retain, nonatomic) APCDTOBizDataExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *coreTrackParams;
@property (copy, nonatomic) NSString *customTrackParamsString;
@property (copy, nonatomic) NSDictionary *createAwemeParams;
@property (retain, nonatomic) APCDTOActivity *activity;
@property (copy, nonatomic) NSString *reactId;
@property (retain, nonatomic) APCDTOPoiInfo *poi;
@property (retain, nonatomic) APCDTOIMInfo *im;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long categoryDa;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *passThrough;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (nonatomic) long long videoAwemeType;
@property (nonatomic) long long imageAwemeType;
@property (copy, nonatomic) NSDictionary *publishTrackJson;
@property (nonatomic) BOOL needUploadAudioFrames;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (nonatomic) BOOL fromSpecialPlus;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *shootEnterMethod;
@property (retain, nonatomic) APCDTOTmpChunJieConfig *chunJieConfig;
@property (retain, nonatomic) APCDTODyliteRedPacket *dyLiteRedPacket;
@property (nonatomic) BOOL editDisableNextStep;
@property (copy, nonatomic) NSString *presetTrackParams;
@property (nonatomic) long long friendStoryEntrance;
@property (retain, nonatomic) APCDTOTmpYuanDanConfig *yuanDanConfig;
@property (retain, nonatomic) APCDTOThemeConfig *themeConfig;
@property (retain, nonatomic) APCDTOApiParameterAppender *apiParameterAppender;
@property (retain, nonatomic) APCDTOStickerInfoExtra *stickerInfoExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiJSONTransformer;
+ (id)activityJSONTransformer;
+ (id)imJSONTransformer;
+ (id)chunJieConfigJSONTransformer;
+ (id)dyLiteRedPacketJSONTransformer;
+ (id)friendStoryEntranceJSONTransformer;
+ (id)yuanDanConfigJSONTransformer;
+ (id)themeConfigJSONTransformer;
+ (id)apiParameterAppenderJSONTransformer;
+ (id)stickerInfoExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void)p_activityInfoConfigurationWithPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
