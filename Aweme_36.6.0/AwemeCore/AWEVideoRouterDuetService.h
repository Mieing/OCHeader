@class NSString;

@interface AWEVideoRouterDuetService : NSObject <AWEStudioDuetService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getStickersFromAweme:(id)a0 sticker:(id)a1 isCommercialDuetTask:(BOOL)a2 stickerDownloadCompletion:(id /* block */)a3 normalCompletion:(id /* block */)a4;
+ (void)dealImageAlbumCurrentIndexWithAweme:(id)a0 duetResourceURI:(id)a1;
+ (void)downloadImageAlbumPictureFromAweme:(id)a0 selectImageIndex:(long long)a1 imageModel:(id)a2 mediaType:(long long)a3 completion:(id /* block */)a4;
+ (id)destinationURLForURI:(id)a0 mediaType:(long long)a1;
+ (void)getLocalImageAlbumFileFromAweme:(id)a0 completion:(id /* block */)a1;
+ (void)getLocalVideoFromAweme:(id)a0 completion:(id /* block */)a1;
+ (void)showStickerFetchError:(id)a0;

- (id)createDuetVideoWithAweme:(id)a0 trackInfo:(id)a1;
- (id)coverImageWithAsset:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 radians:(double)a2;
- (id)startDuetWithAweme:(id)a0 showGrant:(BOOL)a1 withInfo:(id)a2 publishModel:(id)a3 inputData:(id)a4;
- (id)startDuetWithAweme:(id)a0 showGrant:(BOOL)a1 withInfo:(id)a2 publishModel:(id)a3 challengeModel:(id)a4 inputData:(id)a5;
- (id)startDuetWithAweme:(id)a0 showGrant:(BOOL)a1 withInfo:(id)a2 publishModel:(id)a3 challengeModel:(id)a4 videoReplyModel:(id)a5 inputData:(id)a6;
- (id)startDuetWithAweme:(id)a0 stickerID:(id)a1 publishModel:(id)a2 challengeModel:(id)a3 inputData:(id)a4;

@end
