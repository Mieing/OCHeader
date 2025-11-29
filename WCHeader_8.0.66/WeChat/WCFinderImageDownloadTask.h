@class NSString;
@protocol WCFImageOperation;

@interface WCFinderImageDownloadTask : NSObject <WCFinderAccessoryDownloadTask>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id<WCFImageOperation> downloadOp;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long batchIndex;
@property (copy, nonatomic) id /* block */ completionForBiz;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrl:(id)a0;
- (id)identifierKey;
- (void)startDownload;
- (void)stopDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void).cxx_destruct;

@end
