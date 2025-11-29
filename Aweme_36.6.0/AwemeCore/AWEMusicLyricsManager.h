@class YYCache;

@interface AWEMusicLyricsManager : NSObject

@property (retain, nonatomic) YYCache *yyCache;

+ (void)requestLyrics:(id)a0 type:(unsigned long long)a1 previewStartTime:(double)a2 previewEndTime:(double)a3 musicId:(id)a4 completion:(id /* block */)a5;
+ (id)errorCode:(long long)a0 msg:(id)a1;
+ (void)p_requestLyrics:(id)a0 type:(unsigned long long)a1 previewStartTime:(double)a2 previewEndTime:(double)a3 musicId:(id)a4 completion:(id /* block */)a5 tracker:(id /* block */)a6;
+ (id)filterUnavailableModels:(id)a0 previewStartTime:(double)a1 previewEndTime:(double)a2;
+ (void)parserJson:(id)a0 completion:(id /* block */)a1;
+ (void)parserLRC:(id)a0 completion:(id /* block */)a1 tracker:(id /* block */)a2;
+ (void)parserKRC:(id)a0 completion:(id /* block */)a1;
+ (long long)resolveLrcTimeTag:(id)a0;
+ (id)shared;
+ (id)processModels:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
