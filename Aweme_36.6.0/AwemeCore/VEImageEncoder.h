@class NSString, NSURL;

@interface VEImageEncoder : NSObject {
    struct CGImageDestination { } *imageDestination;
}

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0 frames:(unsigned long long)a1 loopCount:(unsigned long long)a2 exportFilePath:(id)a3;
- (id)initWithType:(unsigned long long)a0 frames:(unsigned long long)a1 exportFilePath:(id)a2;
- (void)appendImage:(id)a0 withDuration:(double)a1;
- (void)appendImageRef:(struct CGImage { } *)a0 withDuration:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (BOOL)encode;

@end
