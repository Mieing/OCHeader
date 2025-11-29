@class NSString;

@interface MMFinderLiveLimitModeLiveInfoEnsurer : NSObject <WCFinderLiveExt>

@property (copy, nonatomic) id /* block */ onLiveInfoUpdated;
@property (copy, nonatomic) NSString *tid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTid:(id)a0;
- (void)dealloc;
- (void)onFinderLiveInfoUpdated:(id)a0 liveInfo:(id)a1;
- (BOOL)ensureLiveInfoReadyIfNeededWithCompletion:(id /* block */)a0 timeout:(double)a1;
- (void)onLiveInfoUpdateTimeout;
- (void).cxx_destruct;

@end
