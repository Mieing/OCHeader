@class NSString;

@interface XPlayProcessorTypeBmfSharpen : NSObject <XPlayRenderProcessorType>

@property (nonatomic) double wt;
@property (nonatomic) double thr;
@property (nonatomic) double ovrt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWt:(double)a0 thr:(double)a1 ovrt:(double)a2;

@end
