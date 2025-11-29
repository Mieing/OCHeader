@class NSString, CKGenericTemplateModel;
@protocol ACCEditOneClickFilmApplyTaskDelegation;

@interface ACCEditOneClickFilmApplyTask : NSObject

@property (nonatomic) BOOL shouldOnlyDownload;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isPreload;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyTaskDelegation> delegate;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL forbidPlay;

- (BOOL)preprocessIfNeeded;
- (void)markOnlyProcessDownloadTemplate;
- (void)markDidFinishTask:(BOOL)a0 completionType:(unsigned long long)a1 error:(id)a2;
- (void)markDidBeginDownloadTemplate;
- (void)markDidFinishDownloadTemplate:(BOOL)a0 error:(id)a1;
- (void)markDidCancelTask;
- (void).cxx_destruct;
- (void)start;

@end
