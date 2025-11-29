@class NSString;

@interface AWEDTOUploadSaveModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isWaterMark;
@property (nonatomic) BOOL isSaveLocal;
@property (copy, nonatomic) NSString *localTempPath;
@property (copy, nonatomic) NSString *localFinalPath;
@property (nonatomic) long long saveType;
@property (nonatomic) BOOL saveToAlbum;
@property (nonatomic) BOOL savePrivatePath;
@property (nonatomic) BOOL enableSilentEnhancement;
@property (nonatomic) long long watermarkStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
