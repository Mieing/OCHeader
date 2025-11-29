@class NSString, NSMutableArray;
@protocol CSJWebViewDynamicRenderInterface;

@interface CSJWebViewDynamicRenderOperation : NSOperation <CSJWebViewDynamicRenderDelegate>

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) long long renderIndex;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSMutableArray *logFlowArray;
@property (nonatomic) BOOL haveDone;
@property (retain, nonatomic) id<CSJWebViewDynamicRenderInterface> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewWillRenderInImplementation:(id)a0;
- (void)webViewDidRenderInImplementation:(id)a0;
- (void)pbu_addFlowLogWithMsg:(id)a0;
- (void)done_3501;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)start;
- (void)dealloc;
- (id)initWithImplementation:(id)a0;

@end
