@class NSArray, RxScheduler, NSString, NSMutableDictionary, NSMutableArray;

@interface BDAWebViewChannelInterceptor : NSObject <IESFalconCustomInterceptor>

@property (nonatomic) BOOL isGeckoResourceReady;
@property (retain, nonatomic) NSArray *preconnectURLs;
@property (retain, nonatomic) NSMutableArray *requestURLs;
@property (retain, nonatomic) NSMutableArray *preloadSuccessInfo;
@property (retain, nonatomic) NSMutableArray *preloadFailInfo;
@property (nonatomic) BOOL hasTrackPreloadSourceDetail;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (nonatomic) BOOL disableHTMLIntercept;
@property (copy, nonatomic) NSString *mainDocumentURL;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *currentLoadURL;
@property (nonatomic) long long domainCount;
@property (nonatomic) long long preloadSuccessCount;
@property (nonatomic) BOOL isTrueRequestLoading;
@property (retain, nonatomic) NSArray *MIMETypes;
@property (retain, nonatomic) NSMutableDictionary *falconDatas;
@property (copy, nonatomic) id /* block */ trackEventBlock;
@property (nonatomic) BOOL isMainHTMLRequestSend;
@property (copy, nonatomic) NSString *HTMLFileMd5;
@property (copy, nonatomic) NSString *HTMLFileUrl;
@property (nonatomic) BOOL isTccJSONInterceptor;
@property (nonatomic) BOOL isTccJSONPreloadSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startFetchAdLandingPagePreloadConfig:(id)a0 openURL:(id)a1 logExtras:(id)a2 completion:(id /* block */)a3;
+ (id)resourcePathFromAccessPath:(id)a0;

- (id)falconMetaDataForURLRequest:(id)a0;
- (id)filterRepeatPreloadInfo:(id)a0;
- (BOOL)isMainDocumentRequest:(id)a0;
- (void)recordInterceptorInfo:(id)a0 URLString:(id)a1 status:(long long)a2;
- (BOOL)isInFilterMIMEType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
