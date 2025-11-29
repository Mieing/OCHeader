@class NSString;

@interface XPlayProcessorTypeSharpen : NSObject <XPlayRenderProcessorType>

@property (nonatomic) double sharpness;
@property (nonatomic) double brightness;
@property (nonatomic) double contrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSharpness:(double)a0 brightness:(double)a1 contrast:(double)a2;

@end
