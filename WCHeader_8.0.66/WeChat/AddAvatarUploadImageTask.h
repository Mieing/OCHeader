@class NSString, UIImage;
@protocol AddAvatarUploadImageTaskDelegate;

@interface AddAvatarUploadImageTask : NSObject <PBMessageObserverDelegate, ICdnComMgrExt>

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) UIImage *uploadImage;
@property (retain, nonatomic) NSString *uploadFileName;
@property (retain, nonatomic) NSString *tmpFilePath;
@property (retain, nonatomic) NSString *imageCdnUrl;
@property (retain, nonatomic) NSString *imageCdnFileId;
@property (readonly, nonatomic) unsigned int state;
@property (weak, nonatomic) id<AddAvatarUploadImageTaskDelegate> delegate;

- (void)dealloc;
- (id)initWithAppId:(id)a0;
- (BOOL)startUploadByImage:(id)a0;
- (BOOL)startUploadByImageCdnUrl:(id)a0;
- (void)cancelUpload;
- (void)setState:(unsigned int)a0;
- (void)reset;
- (void)OnCdnUpload:(id)a0;
- (void)sendAddAvatarHeadImageReq;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleAddAvatarHeadImgResp:(id)a0;
- (void).cxx_destruct;

@end
