@class NSObject, NSString, NSData, NSOperation, AMapNetworkManager;
@protocol OS_dispatch_queue;

@interface MAMapCustomStyleModule : NSObject {
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (retain, nonatomic) AMapNetworkManager *networkManager;
@property (retain, nonatomic) NSOperation *onlineStyleDownloadOperation;
@property (retain, nonatomic) NSOperation *onlineExtraStyleDownloadOperation;
@property (retain, nonatomic) NSData *onlineStyleData;
@property (retain, nonatomic) NSData *onlineExtraStyleData;
@property (retain, nonatomic) NSString *offlineStyleResPath;

- (void)cancelAllDownloading;
- (void)cancelStyleDownloading;
- (void)cancelExtraStyleDownloading;
- (id)commonParameterWithID:(id)a0 isOversea:(BOOL)a1;
- (void)onHandleOnlineStyleDowloadResult:(id)a0 error:(id)a1 styleId:(id)a2 isOversea:(BOOL)a3 isCache:(BOOL)a4 cacheKey:(id)a5 lastModified:(double)a6 resultCallBack:(id /* block */)a7;
- (void)responseCacheDataWith:(id)a0 resultCallBack:(id /* block */)a1;
- (void)writeToFileWith:(id)a0 data:(id)a1 lastModify:(double)a2;
- (void)inflateCombinedZipStyleData:(id)a0 styleId:(id)a1 callback:(id /* block */)a2;
- (void)onHandleOnlineExtraStyleDowloadResult:(id)a0 error:(id)a1 isCache:(BOOL)a2 extraCacheKey:(id)a3 lastModified:(double)a4 resultCallBack:(id /* block */)a5;
- (void)getCustomOnlineData:(id)a0 isOversea:(BOOL)a1 resultCallBack:(id /* block */)a2;
- (void)getCustomOnlineExtraData:(id)a0 isOversea:(BOOL)a1 resultCallBack:(id /* block */)a2;
- (void)storeStyleRes:(id)a0 toPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
