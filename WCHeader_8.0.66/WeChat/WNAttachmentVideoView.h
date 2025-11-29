@class NSString, FavSightView;

@interface WNAttachmentVideoView : WNAttachmentBaseView <FavSightViewDelegate, FavVideoCompressExt> {
    FavSightView *_videoPlayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightOfAttachment:(id)a0 withWidth:(double)a1;

- (id)initWithAttachment:(id)a0;
- (void)layoutView;
- (void)tryConfigCompressVideoPath;
- (void)onClickObject;
- (void)onFavSightSizeDidChange:(id)a0;
- (void)onFavVideoCompressFinish:(id)a0 isSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
