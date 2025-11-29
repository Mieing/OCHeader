@class PAGDecoderImpl;

@interface PAGDecoder : NSObject {
    PAGDecoderImpl *pagDecoder;
}

+ (id)Make:(id)a0;
+ (id)Make:(id)a0 maxFrameRate:(float)a1 scale:(float)a2;

- (id)initWithDecoder:(id)a0;
- (void)dealloc;
- (id)impl;
- (long long)width;
- (long long)height;
- (long long)numFrames;
- (float)frameRate;
- (BOOL)checkFrameChanged:(int)a0;
- (BOOL)copyFrameTo:(void *)a0 rowBytes:(unsigned long long)a1 at:(long long)a2;
- (BOOL)readFrame:(long long)a0 to:(struct __CVBuffer { } *)a1;
- (id)frameAtIndex:(long long)a0;

@end
