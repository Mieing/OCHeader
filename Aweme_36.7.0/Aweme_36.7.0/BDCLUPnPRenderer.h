@class NSURLSession, NSMutableDictionary, NSString, NSLock, BDCLUPnPItem;
@protocol BDCLUPnPResponseDelegate;

@interface BDCLUPnPRenderer : NSObject <BDByteCastURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableDictionary *redirectionBlockDic;
@property (retain, nonatomic) NSLock *redirectionBlockDicLock;
@property (nonatomic) BOOL enableDLNALoadAvtScpd;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) BDCLUPnPItem *model;
@property (weak, nonatomic) id<BDCLUPnPResponseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scpdCoreActionKeys;

- (void)stopWithCallback:(id /* block */)a0;
- (void)getMediaInfoWithCallback:(id /* block */)a0;
- (void)urlSessionDelegator:(id)a0 requestUrl:(id)a1 resolvedUrl:(id)a2 taskDescription:(id)a3 statusCode:(long long)a4;
- (void)tryAppendCustomKeypath:(id)a0 cmd:(id)a1 ignoreArgs:(id)a2;
- (void)postRequestWith:(id)a0 callback:(id /* block */)a1;
- (void)postRequestWith:(id)a0;
- (void)postRequestWith:(id)a0 retryCount:(long long)a1 callback:(id /* block */)a2;
- (void)setURLRedirectCompletionBlock:(id /* block */)a0 forKey:(id)a1;
- (void)requestRedirectWithOriginUrl:(id)a0 intermediateUrl:(id)a1 maxCount:(long long)a2 currentIndex:(long long)a3;
- (void)postRequestWith:(id)a0 index:(long long)a1 retryCount:(long long)a2 andCallback:(id /* block */)a3;
- (BOOL)shouldConvertErrorCode:(id)a0;
- (id)errorCodeMap;
- (BOOL)parseRequestResponseData:(id)a0 postXML:(id)a1 action:(id)a2 connectId:(id)a3 error:(id *)a4;
- (void)postCustomRequestWith:(id)a0 cmd:(id)a1 andCallback:(id /* block */)a2;
- (BOOL)_UndefinedResponse:(id)a0 postXML:(id)a1 code:(long long)a2 description:(id)a3 error:(id *)a4;
- (BOOL)_SendMessageResponseWith:(id)a0 cmd:(id)a1 rtDic:(id *)a2 connectId:(id)a3 error:(id *)a4;
- (BOOL)_GetErrorInfoResponse:(id)a0 action:(id)a1 error:(id *)a2;
- (BOOL)resultsWith:(id)a0 postXML:(id)a1 action:(id)a2 connectId:(id)a3 error:(id *)a4;
- (void)_SetAVTransportURIResponse;
- (void)getTransportInfoWithConnectId:(id)a0 callback:(id /* block */)a1;
- (void)_SetNextAVTransportURIResponse;
- (void)_PauseResponse;
- (void)_PlayResponse;
- (void)_StopResponse;
- (void)_SeekResponse;
- (void)_NextResponse;
- (void)_PreviousResponse;
- (void)_SetVolumeResponse;
- (void)_GetVolumeSuccessWith:(id)a0;
- (void)_GetPositionInfoResponseWith:(id)a0;
- (void)_GetTransportInfoResponseWith:(id)a0;
- (void)_GetMediaInfoResponseWith:(id)a0;
- (BOOL)upnpErrorInfo:(id)a0 action:(id)a1 error:(id *)a2;
- (BOOL)getSinkErrorInfo:(id)a0 action:(id)a1 error:(id *)a2;
- (void)_ResumeResponse;
- (void)_AddVolumeResponse;
- (void)_SubVolumeResponse;
- (void)_SpeedResponse;
- (void)_MessageResponse;
- (id /* block */)getAndRemoveURLRedirectCompletionBlockForKey:(id)a0;
- (id)initWithModel:(id)a0 contextId:(id)a1;
- (void)setAVTransportURI:(id)a0 didl:(id)a1 connectId:(id)a2 extra:(id)a3 callback:(id /* block */)a4;
- (void)setNextAVTransportURI:(id)a0;
- (void)playWithCallback:(id /* block */)a0;
- (void)getPositionInfo;
- (void)seek:(float)a0 andCallback:(id /* block */)a1;
- (void)requestRedirectUrl:(id)a0 maxCount:(long long)a1 completion:(id /* block */)a2;
- (void)setVolumeWith:(id)a0;
- (void)requestWithParam:(id)a0 cmd:(id)a1 callback:(id /* block */)a2;
- (void)previous;
- (void).cxx_destruct;
- (void)pause;
- (void)next;
- (void)dealloc;
- (void)getVolume;

@end
