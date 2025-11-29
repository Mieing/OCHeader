@class NSDictionary, NSString;

@interface QBASINetworkQueue : NSOperationQueue <QBASIProgressDelegate, QBASIHTTPRequestDelegate, NSCopying>

@property int requestsCount;
@property (nonatomic, setter=setUploadProgressDelegate:) id uploadProgressDelegate;
@property (nonatomic, setter=setDownloadProgressDelegate:) id downloadProgressDelegate;
@property SEL requestDidStartSelector;
@property SEL requestDidReceiveResponseHeadersSelector;
@property SEL requestWillRedirectSelector;
@property SEL requestDidFinishSelector;
@property SEL requestDidFailSelector;
@property SEL queueDidFinishSelector;
@property BOOL shouldCancelAllRequestsOnFailure;
@property id delegate;
@property BOOL showAccurateProgress;
@property (retain) NSDictionary *userInfo;
@property unsigned long long bytesUploadedSoFar;
@property unsigned long long totalBytesToUpload;
@property unsigned long long bytesDownloadedSoFar;
@property unsigned long long totalBytesToDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queue;

- (id)init;
- (void)dealloc;
- (void)setSuspended:(BOOL)a0;
- (void)reset;
- (void)go;
- (void)cancelAllOperations;
- (void)resetProgressDelegate:(id *)a0;
- (void)addHEADOperation:(id)a0;
- (void)addOperation:(id)a0;
- (void)requestStarted:(id)a0;
- (void)request:(id)a0 didReceiveResponseHeaders:(id)a1;
- (void)request:(id)a0 willRedirectToURL:(id)a1;
- (void)requestFinished:(id)a0;
- (void)requestFailed:(id)a0;
- (void)request:(id)a0 didReceiveBytes:(long long)a1;
- (void)request:(id)a0 didSendBytes:(long long)a1;
- (void)request:(id)a0 incrementDownloadSizeBy:(long long)a1;
- (void)request:(id)a0 incrementUploadSizeBy:(long long)a1;
- (void)authenticationNeededForRequest:(id)a0;
- (void)proxyAuthenticationNeededForRequest:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
