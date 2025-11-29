@class NSString, NSError, VEVideoConfig, VEffmpegReader;
@protocol VEVideoProcessDelegate;

@interface VEFFmpegReaderUnit : NSObject <VEVideoProcessDelegate>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VEVideoConfig *configData;
@property (retain, nonatomic) VEffmpegReader *ffmepgeReader;
@property (weak, nonatomic) id<VEVideoProcessDelegate> videoDownstream;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *vtDesc;
@property (readonly, nonatomic) int maxRefFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getReaderError;
- (void)cancelReader;
- (BOOL)processSampleData:(id)a0;
- (void)seektoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)getNeighborKeyTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 flags:(int)a1;
- (id)getAllIFrameTimeStamp;
- (double)getAvgFrameRate;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)startReader;
- (void)stopReader;

@end
