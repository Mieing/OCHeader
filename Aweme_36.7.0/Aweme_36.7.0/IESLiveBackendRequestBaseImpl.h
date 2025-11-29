@class IESLivePreloadRequestParam, NSString;

@interface IESLiveBackendRequestBaseImpl : NSObject <IESLiveBackendRequestImplProtocol>

@property (retain, nonatomic) IESLivePreloadRequestParam *preloadParam;
@property (nonatomic) double requestResponseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (BOOL)pbParserWithOutBody;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
