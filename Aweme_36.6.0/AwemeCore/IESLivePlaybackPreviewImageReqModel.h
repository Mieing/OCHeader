@class BDWebImageRequest, UIImage;

@interface IESLivePlaybackPreviewImageReqModel : IESLiveDynamicModel

@property (retain, nonatomic) BDWebImageRequest *req;
@property (retain, nonatomic) UIImage *previewImg;
@property (nonatomic) BOOL didLoad;

@end
