@class NSString, UIImage, NSError, NSURL, PHLivePhoto;

@interface AWECommentMediaManagerSwiftImpl.CommentLivePhotoDownloadCallBackInfo : NSObject <AWECommentLivePhotoDownloadCallBackInfo> {
    void /* function */ resourceID;
    void /* function */ error;
    void /* unknown type, empty encoding */ videoPathURL;
    void /* unknown type, empty encoding */ imagePathURL;
}

@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic, retain) UIImage *coverImage;
@property (nonatomic, copy) NSString *resourceID;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSURL *videoPathURL;
@property (nonatomic, copy) NSURL *imagePathURL;

- (void).cxx_destruct;
- (id)init;

@end
