@class IESThirdPartyStickerModel, NSArray, NSString, NSDictionary, IESThirdPartyStickerInfoModel, IESEffectModel;

@interface IESInfoStickerModel : MTLModel <MTLJSONSerializing> {
    IESEffectModel *_effectModel;
    IESThirdPartyStickerModel *_thirdPartyStickerModel;
}

@property (nonatomic) long long downloadStatus;
@property (readonly, copy, nonatomic) NSArray *previewImgUrls;
@property (readonly, copy, nonatomic) NSArray *typesSec;
@property (readonly, copy, nonatomic) NSArray *algorithmRequirementsSec;
@property (readonly, copy, nonatomic) NSString *modelNamesJsonStrSec;
@property (copy, nonatomic) NSArray *types;
@property (copy, nonatomic) NSArray *algorithmRequirements;
@property (copy, nonatomic) NSString *modelNamesJsonStr;
@property (copy, nonatomic) NSDictionary *modelNames;
@property (copy) NSArray *childrenStickers;
@property (readonly, nonatomic) NSString *effectName;
@property (readonly, copy, nonatomic) NSString *hintLabel;
@property (readonly, copy, nonatomic) NSString *hintIconURI;
@property (readonly, copy, nonatomic) NSArray *hintIconDownloadURLs;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (copy, nonatomic) NSString *iconDownlaodURI;
@property (copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *effectIdentifier;
@property (readonly, copy, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (readonly, copy, nonatomic) NSString *parentEffectID;
@property (readonly, copy, nonatomic) NSArray *childrenIds;
@property (readonly, nonatomic) long long effectType;
@property (readonly, copy, nonatomic) NSArray *musicIDs;
@property (readonly, nonatomic) unsigned long long lokiSource;
@property (readonly, copy, nonatomic) NSString *designerId;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) BOOL isCommerce;
@property (readonly, copy, nonatomic) NSString *iopId;
@property (readonly, nonatomic) BOOL isIop;
@property (readonly, copy, nonatomic) NSString *designerEncryptedId;
@property (readonly, copy, nonatomic) NSString *sdkExtra;
@property (readonly, copy, nonatomic) NSString *resourceID;
@property (readonly, copy, nonatomic) NSString *adRawData;
@property (readonly, copy, nonatomic) NSArray *bindIDs;
@property (readonly, nonatomic) long long ptime;
@property (readonly, copy, nonatomic) NSString *gradeKey;
@property (readonly, copy, nonatomic) NSString *composerParams;
@property (copy, nonatomic) NSString *panelName;
@property (readonly, nonatomic) long long hintFileFormat;
@property (readonly, copy, nonatomic) NSString *hintFileURI;
@property (readonly, copy, nonatomic) NSArray *hintFileURLs;
@property (readonly, copy, nonatomic) NSArray *challengeIDs;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long dataSource;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *thumbnailSticker;
@property (readonly, nonatomic) IESThirdPartyStickerInfoModel *sticker;
@property (readonly, copy, nonatomic) NSString *clickURL;
@property (readonly, copy, nonatomic) NSString *thirdPartyExtra;
@property (readonly, copy, nonatomic) NSString *authorName;
@property (readonly, nonatomic) long long authorPlatformType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)effectModel;
- (void)updateModelNames;
- (id)thirdPartyStickerModel;
- (void)updateChildrenStickersWithCollection:(id)a0;
- (BOOL)isUploadSticker;
- (BOOL)isIMEmojiSticker;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)filePath;
- (void).cxx_destruct;
- (void)setURLPrefix:(id)a0;
- (BOOL)downloaded;
- (id)stickerIdentifier;

@end
