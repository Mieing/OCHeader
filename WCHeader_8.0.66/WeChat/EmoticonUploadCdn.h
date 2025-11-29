@class CdnUploadEmojiInfo;
@protocol EmoticonUploadCdnDelegate;

@interface EmoticonUploadCdn : MMObject <ICdnComMgrExt>

@property (weak, nonatomic) id<EmoticonUploadCdnDelegate> delegate;
@property (retain, nonatomic) CdnUploadEmojiInfo *cdnInfo;

- (id)initWithPassData:(id)a0 uploadInfo:(id)a1 delegate:(id)a2;
- (void)startUpload;
- (void)stopUpload;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
