@class NSString;

@interface OpenApiImageCdnUploader : NSObject

@property (copy) id /* block */ uploadCallback;
@property (retain, nonatomic) NSString *musicDataCDNMsgID;

- (id)transferImageDataToTargetSize:(id)a0;
- (id)createMusicVideoCDNMediaInfo:(id)a0;
- (void)tryUploadMVImageWithData:(id)a0 callback:(id /* block */)a1;
- (void)onUplaodFail;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
