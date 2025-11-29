@interface WCFFmpegUtil : NSObject

+ (BOOL)isH265Video:(id)a0;
+ (BOOL)isH266Video:(id)a0;
+ (float)durationWithPath:(id)a0;
+ (id)getVideoMetadataWithPath:(id)a0;
+ (id)fillFFmpegMetadata:(struct { struct { int x0; int x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; int x7; long long x8; int x9; unsigned int x10; int x11; } x0; struct { int x0; int x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; int x7; long long x8; int x9; unsigned int x10; int x11; } x1; float x2; })a0;
+ (id)getMetadataWithData:(id)a0;
+ (id)getMediaMetaInfo:(id)a0;

@end
