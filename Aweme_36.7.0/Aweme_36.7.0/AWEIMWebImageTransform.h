@class NSString;

@interface AWEIMWebImageTransform : NSObject <AWEWebImageTransformProtocol>

@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *extCacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (void).cxx_destruct;

@end
