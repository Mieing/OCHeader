@class AWEMediaDownloadCommentTask, UIViewController;

@interface AWECommentMediaDownloaderContext : NSObject <AWEMediaDownloaderContextProtocol>

@property (nonatomic) double progress;
@property (nonatomic) double downloadBarHeight;
@property (retain, nonatomic) AWEMediaDownloadCommentTask *currentTask;
@property (retain, nonatomic) AWEMediaDownloadCommentTask *retryTask;
@property (weak, nonatomic) UIViewController *currentAppearVC;

- (long long)currentTaskStatus;
- (id)currentDownloadAwemeID;
- (void).cxx_destruct;

@end
