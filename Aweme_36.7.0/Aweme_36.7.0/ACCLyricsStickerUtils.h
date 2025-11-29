@interface ACCLyricsStickerUtils : NSObject

+ (long long)resolveLrcTimeTag:(id)a0;
+ (void)formatMusicLyricWithACCMusicModel:(id)a0 completion:(id /* block */)a1;
+ (void)updateFrameForLyricsStickerWrapperView:(id)a0 editStickerService:(id)a1;
+ (double)validValueForFloat:(double)a0 defaultValue:(double)a1;
+ (id)parserLRC:(id)a0;
+ (id)formatLyricWithFilePath:(id)a0 musicModel:(id)a1;
+ (id)convertLyricToCaption:(id)a0 nextLyric:(id)a1 startTime:(double)a2 endTime:(double)a3;
+ (void)convertLyricToCaptionArray:(id)a0 musicModel:(id)a1 lyricType:(unsigned long long)a2 startTime:(double)a3 endTime:(double)a4 completion:(id /* block */)a5;
+ (void)convertLyricToCaptionArray:(id)a0 startTime:(double)a1 endTime:(double)a2 completion:(id /* block */)a3;

@end
