@class NSString;
@protocol TPPreloadProxyDelegate, ITPPreloadProxyLifeCycleDelegate;

@interface TPPreloadProxyInternalDelegate : NSObject <TPDLProxyPreloadDelegate>

@property (nonatomic) int playId;
@property (weak, nonatomic) id<TPPreloadProxyDelegate> delegate;
@property (weak, nonatomic) id<ITPPreloadProxyLifeCycleDelegate> lifeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 lifeCycleDelegate:(id)a1;
- (void)onPrepareSuccess;
- (void)onPrepareErrorWithModuleId:(int)a0 errorCode:(int)a1 extInfo:(id)a2;
- (void)onPrepareDownloadProgressUpdateWithPlayableDuration:(int)a0 downloadSpeedKBs:(int)a1 currentDownloadSizeByte:(long long)a2 totalFileSizeByte:(long long)a3 extInfo:(id)a4;
- (void).cxx_destruct;

@end
