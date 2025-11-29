@class NSString;
@protocol XPlayAlbumDelegate;

@interface CGAlbum : CGObject <XPlayAlbumProtocol>

@property (weak, nonatomic) id<XPlayAlbumDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handlePickPhotoActionJson:(id)a0;
- (void)handleSavePhotoActionJson:(id)a0;
- (void)handleSaveVideoActionJson:(id)a0;
- (void)handlePickPhotoActionBinary:(id)a0;
- (void)handleSavePhotoActionBinary:(id)a0;
- (void)handleSaveVideoActionBinary:(id)a0;
- (void)sendPhotoFilePathInTOS:(id)a0;
- (void)pickPhotoAction;
- (void)savePhotoActionWithUrl:(id)a0;
- (void)saveVideoActionWith:(id)a0;
- (void)uploadSelectedPhotoWithImage:(id)a0 quality:(double)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)downloadSelectedPhotoWithUrl:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)downloadSelectedVideoWithUrl:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
