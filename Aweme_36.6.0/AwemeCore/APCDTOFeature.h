@class NSString, NSDictionary;

@interface APCDTOFeature : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imagesModeMaxCount;
@property (nonatomic) BOOL albumUiVisible;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) long long albumSelectState;
@property (nonatomic) long long videoDownloadDuration;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL enableMicOnStart;
@property (copy, nonatomic) NSString *musicOrigin;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *lastGroupId;
@property (copy, nonatomic) NSString *challengeId;
@property (nonatomic) long long videoCoding;
@property (nonatomic) long long awemeDuration;
@property (copy, nonatomic) NSDictionary *starAtlasConfig;
@property (nonatomic) BOOL fromScrolling;
@property (nonatomic) BOOL needRefreshFilterData;
@property (nonatomic) BOOL autoOpenAlbum;
@property (nonatomic) BOOL autoOpenOnekeyFilm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
