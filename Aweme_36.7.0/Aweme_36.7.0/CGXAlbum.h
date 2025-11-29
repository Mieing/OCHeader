@class NSString, CGXAlbumModuleBridge;
@protocol XPlayAlbumDelegate;

@interface CGXAlbum : CGObject <CGXAlbumProtocol, XPlayAlbumProtocol>

@property (weak, nonatomic) CGXAlbumModuleBridge *albumModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayAlbumDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)onPickImage:(id)a0 action:(id)a1 flags:(long long)a2 categories:(id)a3;
- (void)onSaveImage:(id)a0 packageName:(id)a1 picPath:(id)a2 picDownloadUrl:(id)a3;
- (void)onSaveFile:(id)a0 fileType:(long long)a1 fileStatus:(long long)a2 uploadProgress:(long long)a3;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)sendPhotoFilePathInTOS:(id)a0;
- (void)pickPhotoAction;
- (void)savePhotoActionWithUrl:(id)a0;
- (void)saveVideoActionWith:(id)a0;
- (void)uploadSelectedPhotoWithImage:(id)a0 quality:(double)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)downloadSelectedPhotoWithUrl:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)downloadSelectedVideoWithUrl:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
