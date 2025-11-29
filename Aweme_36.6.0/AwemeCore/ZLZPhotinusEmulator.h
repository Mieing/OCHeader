@class NSArray, NSString, NSURL, ZLZVideoWriter, NSMutableArray;

@interface ZLZPhotinusEmulator : NSObject <ZLZVideoDispenserDelegate>

@property unsigned long long sequenceIndex;
@property (retain) ZLZVideoWriter *videoWriter;
@property (retain) NSArray *colorSequence;
@property unsigned long long smoothTransition;
@property unsigned long long colorIndex;
@property long long capturedIndex;
@property long long frameCount;
@property BOOL canStart;
@property (retain) NSURL *metadataUrl;
@property (retain) NSURL *videoUrl;
@property (retain) NSString *fileName;
@property void *fileWriterFinishContext;
@property (retain) NSMutableArray *frameMetadataStorage;
@property (nonatomic) BOOL enableSmoothTransition;
@property (retain, nonatomic) NSMutableArray *sampleBufferRefArray;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) BOOL hasFinished;
@property (copy) id /* block */ colorChangeHandler;
@property (copy) id /* block */ errorHandler;
@property (readonly) BOOL filesReady;
@property (readonly) BOOL hasEnoughFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorIndexLookup:(unsigned long long)a0;
+ (id)appendGrayPadding:(unsigned long long)a0 toColorSequence:(id)a1;
+ (id)extractFrameMetadata:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)preparedSequenceForSmoothTransition:(id)a0 length:(unsigned long long)a1;
+ (id)smoothTransitionOfSequence:(id)a0 length:(unsigned long long)a1;
+ (id)lerpColor:(id)a0 withColor:(id)a1 betweenValue:(double)a2;

- (id)initWithVideoSize:(struct CGSize { double x0; double x1; })a0 withColorPattern:(unsigned long long)a1 andPaddings:(unsigned long long)a2 smoothTransition:(unsigned long long)a3 enableSmooth:(BOOL)a4;
- (void)writeFrameMetadataToFile;
- (void)dispenser:(id)a0 onSampleBufferAvailable:(struct opaqueCMSampleBuffer { } *)a1;
- (void)complete;
- (void).cxx_destruct;
- (void)begin;
- (void)dealloc;

@end
