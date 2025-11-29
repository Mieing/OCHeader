@class NSString;

@interface QBBeaconMixDataUploader : NSObject

@property (nonatomic) BOOL isUploading;
@property (retain) NSString *uploadUrl;

+ (id)sharedInstance;

- (id)init;
- (void)setMaxSizeDataListener:(id)a0;
- (BOOL)doUpload;
- (id)getUploadPkg:(long long)a0 cleanData:(BOOL)a1;
- (BOOL)deleteUploadData:(id)a0;
- (void)failWithResponse:(id)a0 reqPkg:(id)a1;
- (void)finishWithResponse:(id)a0 reqPkg:(id)a1;
- (void).cxx_destruct;

@end
