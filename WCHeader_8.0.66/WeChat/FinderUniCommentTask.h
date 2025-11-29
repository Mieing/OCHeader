@class NSString, WCFinderComment, NSMutableArray, FinderUniCommentRequest;

@interface FinderUniCommentTask : NSObject

@property (retain, nonatomic) WCFinderComment *finderComment;
@property (copy, nonatomic) NSString *localDirectory;
@property (retain, nonatomic) NSMutableArray *pendingSteps;
@property (retain, nonatomic) FinderUniCommentRequest *resultRequest;
@property (nonatomic) unsigned long long processFinishCount;
@property (nonatomic) unsigned long long uploadFinishCount;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithComment:(id)a0 localDirectory:(id)a1;
- (BOOL)shouldContinueWithError:(id)a0;
- (void)execute;
- (id /* block */)handlerForStep:(unsigned long long)a0;
- (id)currentTaskDirectory;
- (void)copyMediaFileWithCompletion:(id /* block */)a0;
- (void)copyAndExportVideoWithVideoInfo:(id)a0 completion:(id /* block */)a1;
- (void)copyMediaWithImageInfo:(id)a0 completion:(id /* block */)a1;
- (void)onFinishCopyMediaWithCompletion:(id /* block */)a0;
- (id)resizeImage:(id)a0 toMaxWidth:(int)a1 andMaxHeight:(int)a2;
- (void)uploadMediaHandlerWithCompletion:(id /* block */)a0;
- (void)onFinishUploadMediaWithCompletion:(id /* block */)a0;
- (void)compressMediaHandlerWithCompletion:(id /* block */)a0;
- (id)buidSendCommentReqeustWithComment:(id)a0;
- (void).cxx_destruct;

@end
