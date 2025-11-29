@class AWEMediaDownloadLoadingView;

@interface AWEMediaDownloadCommentTask : AWEMediaDownloadTask

@property (retain, nonatomic) AWEMediaDownloadLoadingView *loadingView;

+ (id)taskWithOptions:(id)a0;

- (void)downloadStageWillRun:(id)a0;
- (void)updateErrorMessageWithResult:(long long)a0 error:(id)a1;
- (void)tapticWithResult:(long long)a0;
- (void)setupStagesWithType:(unsigned long long)a0;
- (void)setupLoadingView;
- (void)handleProgressChange:(double)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(long long)a0 error:(id)a1;
- (id)initWithOptions:(id)a0;

@end
