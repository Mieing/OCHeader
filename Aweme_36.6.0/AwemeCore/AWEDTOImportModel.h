@class NSArray, NSString, AWEDTOImportAICutData, NSDictionary;

@interface AWEDTOImportModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sourceInfos;
@property (retain, nonatomic) AWEDTOImportAICutData *aiCutData;
@property (nonatomic) long long videoCount;
@property (nonatomic) long long photoCount;
@property (nonatomic) BOOL isMusicClipMode;
@property (nonatomic) long long clipSourceType;
@property (nonatomic) BOOL isMultiVideoUpload;
@property (copy, nonatomic) NSString *uploadImagePath;
@property (copy, nonatomic) NSArray *videoCutInfo;
@property (nonatomic) unsigned long long subMediaType;
@property (nonatomic) BOOL isFaceuVideoFirst;
@property (copy, nonatomic) NSString *livePhotoVideoSource;
@property (copy, nonatomic) NSString *livePhotoImageSource;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) NSDictionary *uploadDuetOriginIdDict;
@property (copy, nonatomic) NSDictionary *uploadDuetFromDict;
@property (copy, nonatomic) NSDictionary *uploadMomentMetaDict;
@property (copy, nonatomic) NSDictionary *uploadEditInfoDic;
@property (copy, nonatomic) NSDictionary *uploadTemplateInfoDic;
@property (copy, nonatomic) NSDictionary *uploadAigcInfoDic;
@property (copy, nonatomic) NSDictionary *uploadPropExtraInfoDic;
@property (nonatomic) BOOL hasAlbumSearchSuggestionAsset;
@property (copy, nonatomic) NSDictionary *uploadAutoCaptionTemplateIdDict;
@property (copy, nonatomic) NSDictionary *uploadAutoCaptionTemplateNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aiCutDataJSONTransformer;
+ (id)videoCutInfoJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
