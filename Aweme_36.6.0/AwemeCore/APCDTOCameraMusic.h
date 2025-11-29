@class NSString, APCDTOCameraMusicExtension;
@protocol ACCMusicModelProtocol;

@interface APCDTOCameraMusic : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (retain, nonatomic) APCDTOCameraMusicExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *reserved_kw_id;
@property (nonatomic) BOOL uiVisible;
@property (copy, nonatomic) NSString *musicSelectedFrom;
@property (nonatomic) BOOL autoApply;
@property (nonatomic) double musicBeginTime;
@property (nonatomic) long long autoPlayType;
@property (copy, nonatomic) NSString *materialInfo;
@property (copy, nonatomic) NSString *followItemId;
@property (copy, nonatomic) NSString *originalClipId;
@property (nonatomic) BOOL showMusicCaption;
@property (copy, nonatomic) NSString *musicCaptionUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoPlayTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
