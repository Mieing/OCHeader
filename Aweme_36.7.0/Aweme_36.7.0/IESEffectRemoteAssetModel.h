@class NSString, NSArray, CKCacheInfo_OC, CKDownloadInfo_OC;

@interface IESEffectRemoteAssetModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ep_panel;
@property (copy, nonatomic) NSString *ep_effectID;
@property (retain, nonatomic) CKCacheInfo_OC *cacheInfo;
@property (retain, nonatomic) CKDownloadInfo_OC *downloadInfo;
@property (readonly, copy, nonatomic) NSString *resourceId;
@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *fileURI;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) long long fileType;
@property (copy, nonatomic) NSArray *fileUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getCKCacheInfo;
- (id)getDownloadInfo;
- (void).cxx_destruct;

@end
