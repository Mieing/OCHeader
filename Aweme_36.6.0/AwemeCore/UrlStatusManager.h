@class NSArray, NSMutableDictionary, NSString, NSDictionary, NSMutableArray;

@interface UrlStatusManager : NSObject

@property (retain) NSArray *urlList;
@property int currIndex;
@property (retain) NSMutableDictionary *urlDic;
@property (copy) NSString *dir;
@property (retain) NSMutableArray *failedArray;
@property int succeedCount;
@property char concurrentCount;
@property long long downloadedLen;
@property (nonatomic) int downloadedCount;
@property BOOL isCancelled;
@property (retain) NSDictionary *fileNameDic;

- (id)initWithConfig:(id)a0 fileNameDic:(id)a1 concurrentCount:(char)a2 dir:(id)a3 param:(id)a4;
- (long long)getEstimatedLen;
- (long long)getDownloadedLen;
- (void)updateUrlStatus:(id)a0 isCompleted:(BOOL)a1 totalLen:(long long)a2;
- (BOOL)isLastRetry;
- (int)getDownloadedCount;
- (id)getNextUrlInfo;
- (id)getFileName:(int)a0;
- (id)getFirstLastFailedUrlInfo;
- (void)deleteFirstFailedUrlInfo;
- (void).cxx_destruct;
- (BOOL)isFailed;
- (void)dealloc;
- (BOOL)isCompleted;
- (void)cancelAsync;

@end
