@class AWEIMMessage, NSString, UIImage, UIView, AWEIMMessageAttachmentDownloadViewModel;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMAwemeMediaImageDownloader : HTSService <AWEIMAwemeMediaImageDownloader>

@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) UIImage *currentImage;
@property (nonatomic) BOOL hasOriginImage;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0 context:(id)a1;
- (void)downloadAndSaveToAlbum;
- (void)setupWithMessage:(id)a0 context:(id)a1;
- (void)downloadImageResourceStart:(id /* block */)a0 finish:(id /* block */)a1;
- (void)getOriginImageWithCompletion:(id /* block */)a0;
- (BOOL)enableImageMediumTest;
- (void)p_configImageContainMediumImage;
- (void)p_configImageUseOrigin;
- (id)imageResourceDownloadModel;
- (void)p_configImage;
- (void)p_saveImage;
- (void)p_saveImageToDevice;
- (void)p_saveAsLivePhoto:(id)a0 videoPath:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
