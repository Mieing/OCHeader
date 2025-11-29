@class NSData, NSString;

@interface BUGifImage : UIImage {
    long long index;
    struct CGImageSource { } *source;
    long long count;
    struct CGSize { double width; double height; } size;
}

@property (nonatomic) long long currentPlayIndex;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *url;

+ (id)gifWithData:(id)a0;

- (id)initGifWithData:(id)a0;
- (BOOL)hasNextImage;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (long long)count;
- (void)resumeIndex;
- (double)frameDuration;
- (id)nextImage;

@end
