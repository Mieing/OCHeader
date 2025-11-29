@class NSString, NSDictionary, TPMediaAssetExtraParam;

@interface TPDrmMediaAsset : NSObject <ITPMediaAsset>

@property (nonatomic) long long drmType;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *certificateUrl;
@property (retain, nonatomic) NSString *contentKeyUrl;
@property (retain, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSString *drmPropertyUseL1;
@property (retain, nonatomic) NSString *drmPropertyGuid;
@property (retain, nonatomic) NSString *drmPropertyPlatform;
@property (retain, nonatomic) NSString *drmPropertyAppVersion;
@property (retain, nonatomic) NSString *drmPropertyCookie;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
