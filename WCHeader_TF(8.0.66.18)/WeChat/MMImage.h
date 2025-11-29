@class NSData, NSString, UIImage, EditImageAttr, NSMutableDictionary, NSDictionary, MMImageLocation, MMImageExifLogInfo, MMAsset, WCMediaEcsInfo;

@interface MMImage : UIImage <PBCoding, NSCoding>

@property (nonatomic) BOOL isEdited;
@property (retain, nonatomic) EditImageAttr *editImageAttr;
@property (copy, nonatomic) NSString *referenceUrlStr;
@property (copy, nonatomic) NSString *m_assetClassNameStr;
@property (nonatomic) long long mattID;
@property (nonatomic) long long imageFrom;
@property (nonatomic) int m_processState;
@property (retain, nonatomic) NSString *dataPath;
@property (retain, nonatomic) MMAsset *m_asset;
@property (retain, nonatomic) NSString *m_assetID;
@property (retain, nonatomic) UIImage *m_imageFromAsset;
@property (retain, nonatomic) NSData *m_imageData;
@property (nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) NSString *livePhotoVideoPath;
@property (retain, nonatomic) MMImageLocation *m_location;
@property (nonatomic) int sourceForSNSUploadStat;
@property (retain, nonatomic) MMImageExifLogInfo *exifLogInfo;
@property (copy, nonatomic) NSString *draftPath;
@property (retain, nonatomic) WCMediaEcsInfo *ecsInfo;
@property (retain, nonatomic) NSDictionary *cameraEditorLogInfo;
@property (readonly, nonatomic) NSMutableDictionary *tempExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mattID;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_imageFrom;
+ (void)PBArrayAdd_m_processState;
+ (void)PBArrayAdd_referenceUrlStr;
+ (void)PBArrayAdd_m_assetClassNameStr;
+ (void)PBArrayAdd_m_location;
+ (void)PBArrayAdd_sourceForSNSUploadStat;
+ (void)PBArrayAdd_exifLogInfo;
+ (void)PBArrayAdd_draftPath;
+ (void)PBArrayAdd_isLivePhoto;
+ (void)PBArrayAdd_livePhotoVideoPath;
+ (void)PBArrayAdd_cameraEditorLogInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)commonInit;
- (id)init;
- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)referenceURL;
- (void)setReferenceURL:(id)a0;
- (Class)m_assetClass;
- (void).cxx_destruct;

@end
