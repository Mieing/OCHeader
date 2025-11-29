@class NetJob;

@interface TTUploadNetCommonTool : NSObject

@property (retain) NetJob *job;

+ (BOOL)isNetworkUnreachable;
+ (BOOL)isMobileNet;
+ (long long)getCurrentNetType;
+ (id)updateSliceInfo:(id)a0 sliceInfo:(id)a1;
+ (void)getUploadInfoFromServer:(id /* block */)a0 netJob:(id)a1 param:(id)a2 sliceInfo:(id)a3 isCompletedMsg:(BOOL)a4;
+ (id)getQuerySliceInfo:(id)a0;
+ (BOOL)updateUserToken:(id)a0;
+ (void)retryUpload:(id /* block */)a0 progressBlock:(id /* block */)a1 queryJob:(id)a2 realUploadJob:(id)a3 sliceInfo:(id)a4;
+ (void)uploadDataWithRetry:(id /* block */)a0 progressBlock:(id /* block */)a1 queryJob:(id)a2 realUploadJob:(id)a3 sliceInfo:(id)a4;
+ (BOOL)isWifi;

- (void).cxx_destruct;

@end
