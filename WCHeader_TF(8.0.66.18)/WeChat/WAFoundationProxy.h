@class NSString;

@interface WAFoundationProxy : NSObject <IWAFoundationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getDiskSize:(unsigned long long *)a0;
+ (BOOL)getFreeSize:(unsigned long long *)a0;
+ (void)setWeAppScene:(id)a0;
+ (void)setExistWeAppCount:(int)a0;
+ (void)decreaseExistWeAppCount;
+ (void)addMatrixUserType:(unsigned int)a0;
+ (void)removeMatrixUserType:(unsigned int)a0;
+ (void)setMatrixCustomInfoWithKey:(id)a0 value:(id)a1;
+ (BOOL)StartHttpsDownloadTask:(id)a0 withUrl:(id)a1 withSavePath:(id)a2 withIPList:(id)a3 withIsGzip:(BOOL)a4 withFileType:(int)a5;
+ (BOOL)StopHttpsDownloadTask:(id)a0;
+ (BOOL)preDownloadVideoWithArgs:(id)a0 complete:(id /* block */)a1;
+ (void)handleWAVideoStartStreamPlaying:(id)a0;
+ (id)sharedPreDownloadTaskInfos;


@end
