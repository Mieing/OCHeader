@class IESLivePreloadRequestParam, NSString;

@interface IESLivePreloadRequestBaseImpl : NSObject <IESLivePreloadRequestImplProtocol>

@property (retain, nonatomic) IESLivePreloadRequestParam *preloadParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requestBusinessIdentifier;

- (id)paramDictionary;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestWillRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (void)updatePreloadRequestParam:(id)a0;
- (id)headerDictionary;
- (BOOL)forbidCurrentOnceRequest;
- (void).cxx_destruct;
- (id)urlPath;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
