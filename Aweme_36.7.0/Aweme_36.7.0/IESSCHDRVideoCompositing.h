@class NSDictionary;

@interface IESSCHDRVideoCompositing : IESSCVideoCompositing

@property (class, retain, nonatomic) NSDictionary *globalHDRSourcePixelBufferAttributes;
@property (class, retain, nonatomic) NSDictionary *globalHDRRequiredPixelBufferAttributesForRenderContext;

+ (void)initialize;

- (id)init;

@end
