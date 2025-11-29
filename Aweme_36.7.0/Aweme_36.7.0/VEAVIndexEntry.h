@class NSString;

@interface VEAVIndexEntry : IESMMObject {
    struct AVIndexEntry { long long x0; long long x1; unsigned char x2 : 2; unsigned int x3 : 30; int x4; } *_entries;
    long long _nb_entries;
    struct AVRational { int num; int den; } _videoStreamBase;
    long long _dtsOffset;
}

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL enableSearchAVEntriesOpt;
@property (nonatomic) int maxGopSize;

- (long long)getSampleTimestamp:(double)a0 seekflags:(int)a1 findKeyFrame:(BOOL)a2;
- (BOOL)loadAllFrameEntry;
- (long long)getSampleMinDistance:(double)a0 seekflags:(int)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
