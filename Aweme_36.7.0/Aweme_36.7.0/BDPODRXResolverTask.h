@class NSString, BDPODRXResolveResult, BDPHttpDownloadTask, NSArray, BDPUniqueID, NSURL;
@protocol BDPODRXResolveDelegate;

@interface BDPODRXResolverTask : NSObject {
    unsigned long long _lastUrlIndex;
}

@property (nonatomic) unsigned long long urlIndex;
@property (retain, nonatomic) BDPODRXResolveResult *result;
@property (retain, nonatomic) BDPHttpDownloadTask *downloadTask;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (weak, nonatomic) id<BDPODRXResolveDelegate> delegate;
@property (copy, nonatomic) NSArray *requestURLs;
@property (readonly, nonatomic) NSURL *prevRequestURL;
@property (nonatomic) float priority;
@property (nonatomic) long long readType;
@property (nonatomic) long long appType;
@property (nonatomic) BOOL useSortedUrls;
@property (nonatomic) BOOL useSTTPKG;
@property (nonatomic) BOOL addGzip;
@property (nonatomic) BOOL addBr;
@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) BOOL isLastRequestURL;

- (void)startTask;
- (id)downloadFinished;
- (long long)pkgCompressType;
- (void)tryNextUrl;
- (void).cxx_destruct;
- (void)suspendTask;
- (void)stopTask;

@end
