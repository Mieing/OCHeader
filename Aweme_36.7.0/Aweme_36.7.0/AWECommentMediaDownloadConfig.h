@class AWECommentMediaDownloadOptions;

@interface AWECommentMediaDownloadConfig : AWEMediaDownloadConfig

@property (retain, nonatomic) AWECommentMediaDownloadOptions *commentDownloadOptions;

+ (id)createConfigWithCommentOptions:(id)a0;

- (id)imageDownloadURL;
- (void).cxx_destruct;
- (BOOL)shouldShowLoading;

@end
