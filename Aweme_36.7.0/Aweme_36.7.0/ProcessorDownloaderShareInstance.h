@class NSLock, NSMutableArray, NSMutableDictionary;

@interface ProcessorDownloaderShareInstance : NSObject

@property (retain, nonatomic) NSMutableArray *downLoadArray;
@property (retain, nonatomic) NSMutableDictionary *downloadedPathDic;
@property (retain, nonatomic) NSLock *mDownloadArraySetLock;
@property (retain, nonatomic) NSMutableDictionary *downloadedSuccessRateDic;
@property (retain, nonatomic) NSMutableDictionary *downloadedCostTimeDic;
@property (retain, nonatomic) NSMutableDictionary *downloadedErrorCodeDic;

+ (id)shareInstance;

- (id)getErrorCode:(id)a0;
- (int)downloadWithConfig:(id)a0 callback:(id /* block */)a1;
- (id)getCacheDir:(id)a0;
- (id)createDownLoader;
- (id)getSuccessRate:(id)a0;
- (id)getCostTime:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
