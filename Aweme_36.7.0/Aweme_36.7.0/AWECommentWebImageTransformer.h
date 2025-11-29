@class NSString;

@interface AWECommentWebImageTransformer : NSObject <AWEWebImageTransformProtocol>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;

@end
