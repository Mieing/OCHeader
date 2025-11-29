@interface MMMP4Parser : NSObject

+ (long long)GetFileSize:(id)a0;
+ (float)parserToGetDurationWithFilePath:(id)a0;
+ (float)GetVideoRealTimeFromVideoMediaInfo:(id)a0;
+ (id)getMediaInfoWithFilePath:(id)a0;
+ (id)getVideoBoxsWithfilePath:(id)a0;
+ (unsigned long long)getBoxOffsetWithName:(id)a0 FileHandle:(id)a1 ParentBoxEndOffset:(unsigned long long)a2;
+ (void)parserMediaInfoWithTrakInfo:(id)a0 MediaInfo:(id)a1 MoovEndOffset:(unsigned long long)a2;
+ (id)updateVideoMediaInfoWhitFileHandler:(id)a0 MediaInfo:(id)a1 mediaOffset:(unsigned long long)a2 mediaSize:(unsigned long long)a3;
+ (void)updateMediaInfoWithMVHD:(id)a0 MediaInfo:(id)a1;

@end
