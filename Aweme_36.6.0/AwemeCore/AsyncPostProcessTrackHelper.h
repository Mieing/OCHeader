@interface AsyncPostProcessTrackHelper : NSObject

+ (id)trackAsyncPostProcessStartResourceFetchWithTask:(id)a0 taskId:(id)a1 hasDraft:(BOOL)a2 hasCache:(BOOL)a3 source:(id)a4;
+ (void)trackAsyncPostProcessStartWithTask:(id)a0 stepRate:(unsigned long long)a1 appendSpecialParam:(id)a2 isFromLoadingBegin:(BOOL)a3 error:(id)a4;
+ (void)destroyAsyncPostProcessTrackWithTask:(id)a0 specialTrack:(id)a1 error:(id)a2;

@end
