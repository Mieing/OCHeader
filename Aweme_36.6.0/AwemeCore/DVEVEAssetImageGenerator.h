@class NSString, NLEInterface_OC;

@interface DVEVEAssetImageGenerator : NSObject <DVEFrameGeneratorProtocol>

@property (retain, nonatomic) NLEInterface_OC *session;
@property (nonatomic) struct CGSize { double width; double height; } resourceSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceBefore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceAfter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generaImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)initVEInstanceWithNLESlot:(id)a0;
- (id)initWithNLESlot:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllCGImageGeneration;

@end
