@class NSString;

@interface XPlayProcessorTypeEnhance : NSObject <XPlayRenderProcessorType>

@property (nonatomic) double brightness;
@property (nonatomic) double contrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBrightness:(double)a0 contrast:(double)a1;

@end
