@class AWECommentImageSourceInfoModel, NSString, AVAsset, UIImage, PHLivePhoto;

@interface AWECommentPublishVideoModel : NSObject <AWECommentPublishVideoModelProtocol> {
    void /* function */ imageSource;
    void /* function */ videoFilePath;
    void /* function */ vids;
}

@property (nonatomic, copy) NSString *imageSource;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSString *videoFilePath;
@property (nonatomic, retain) UIImage *coverImage;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic, copy) NSString *vids;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic, retain) AVAsset *videoAvAsset;
@property (nonatomic) BOOL isLiveClose;
@property (nonatomic, retain) AWECommentImageSourceInfoModel *imageSourceInfo;

- (void).cxx_destruct;
- (id)init;
- (id)imageContent;

@end
