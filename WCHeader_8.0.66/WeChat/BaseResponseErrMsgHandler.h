@class BaseResponseErrMsg, NSString, NSDictionary, MMUIViewController;

@interface BaseResponseErrMsgHandler : NSObject <MMWebViewDelegate>

@property (nonatomic) BOOL needGoNext;
@property (retain, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) BaseResponseErrMsg *errMsg;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ onWebViewCloseAndGoNextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)commonHandleBaseResponse:(id)a0 viewController:(id)a1 config:(id)a2;
+ (BOOL)commonHandleErrorMsg:(id)a0 viewController:(id)a1 config:(id)a2;
+ (BOOL)canHandleErrorMsg:(id)a0;

- (void)dealloc;
- (void)handleErrorMsg:(id)a0 viewController:(id)a1;
- (id)iconForError:(id)a0;
- (void)onHandleErrorDone;
- (void)onHandleErrorAction;
- (void)openUrl:(id)a0;
- (id)getTopViewController;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewDidReturn:(id)a0;
- (void).cxx_destruct;

@end
