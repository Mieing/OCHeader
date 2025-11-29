@interface WCPlayerInfoUtility : MMObject

+ (id)genDefaultAVPlayerInfoWithMediaWrap:(id)a0 playerScene:(unsigned long long)a1 videoPath:(id)a2 initialTime:(double)a3 bLoop:(BOOL)a4;
+ (void)updateAVPlayerInfo:(id)a0 withMediaWrap:(id)a1;
+ (unsigned long long)getMediaUrlNetTypeByVideoPath:(id)a0;
+ (id)generateDownloadArgsWrapWithMediaWrap:(id)a0 playerScene:(unsigned long long)a1;

@end
