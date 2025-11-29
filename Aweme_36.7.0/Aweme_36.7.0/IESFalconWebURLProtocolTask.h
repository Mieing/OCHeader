@class NSMutableDictionary, NSDictionary, WKWebView, NSString, NSURLRequest;

@interface IESFalconWebURLProtocolTask : NSObject <BDWebURLProtocolTask>

@property (retain, nonatomic) NSURLRequest *bdw_request;
@property (nonatomic) BOOL bdw_shouldUseNetReuse;
@property (retain, nonatomic) NSDictionary *bdw_additionalInfo;
@property (retain, nonatomic) NSMutableDictionary *bdw_falconProcessInfoRecord;
@property (retain, nonatomic) NSDictionary *bdw_ttnetResponseTimingInfoRecord;
@property (weak, nonatomic) WKWebView *bdw_webView;
@property (nonatomic) BOOL willRecordForMainFrameModel;
@property (nonatomic) BOOL taskFinishWithTTNet;
@property (nonatomic) BOOL taskFinishWithLocalData;
@property (nonatomic) BOOL taskFromHookAjax;
@property (nonatomic) BOOL useTTNetCommonParams;
@property (nonatomic) BOOL ttnetEnableCustomizedCookie;
@property (nonatomic) int taskHttpCachePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
