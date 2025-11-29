@interface VideoCompressResult : NSObject

@property (nonatomic) BOOL isSucc;
@property (nonatomic) BOOL isUseFFmpegHevcEncoding;
@property (nonatomic) BOOL isHitCache;
@property (nonatomic) BOOL isExportWithoutCompress;

- (id)initWithSucc:(BOOL)a0 hitCache:(BOOL)a1 isUseFFmpegHevcEncoding:(BOOL)a2;
- (id)initWithSucc:(BOOL)a0 hitCache:(BOOL)a1;
- (id)initWithUseFFmpegHevcEncoding:(BOOL)a0;

@end
