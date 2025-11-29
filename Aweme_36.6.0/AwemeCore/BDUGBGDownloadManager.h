@class NSString;
@protocol BDUGBGDownloadTaskProtocol;

@interface BDUGBGDownloadManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ systemCompletion;
@property (nonatomic) BOOL isDownloadFinished;
@property (nonatomic) BOOL isBussinessFinished;
@property (retain, nonatomic) id<BDUGBGDownloadTaskProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)beginDownloadAfterTimeIfNeeded:(long long)a0;
- (void)handleBackgroundURLSession:(id)a0 systemCompletion:(id /* block */)a1;
- (id)backgroundURLSession;
- (void).cxx_destruct;
- (id)init;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)end;

@end
