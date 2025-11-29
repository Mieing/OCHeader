@interface IESVideoPlayer : NSObject

+ (id)playerWithType:(unsigned long long)a0;
+ (BOOL)IESVideoPlayerErrorIsVideoAuditWorkFlowError:(id)a0;
+ (id)playerWithType:(unsigned long long)a0 videoID:(id)a1 andPlayURLs:(id)a2 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)a3 audioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)a4;
+ (id)playerWithType:(unsigned long long)a0 videoID:(id)a1 andPlayURLs:(id)a2 videoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)a3 audioWrapperV2:(id)a4;
+ (void)setPlayerAudioWrapperFixEnable:(unsigned long long)a0 flag:(BOOL)a1;
+ (void)getCacheFileByKey:(unsigned long long)a0 key:(id)a1 completionBlock:(id /* block */)a2;
+ (id)playerWithType:(unsigned long long)a0 videoID:(id)a1 andPlayURLs:(id)a2;
+ (long long)getDownloadCountByVid:(unsigned long long)a0 vid:(id)a1;
+ (id)ownPlayerUrlWithVid:(id)a0;
+ (id)urlWithVideoId:(unsigned long long)a0 vid:(id)a1;

@end
