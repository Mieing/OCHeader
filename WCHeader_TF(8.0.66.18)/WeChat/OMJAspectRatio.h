@interface OMJAspectRatio : NSObject

@property (nonatomic) struct XMFAspectRatio { int _aspectRatioType; struct XRationalI32 { struct __tuple_impl<std::__tuple_indices<0, 1>, int, int> { int __value_; int __value_; } __base_; } _rational; } backingAspectRatio;
@property (readonly, nonatomic) unsigned long long aspectRatioType;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;

+ (id)fromBackingAspectRatio:(const void *)a0;
+ (id)fromType:(unsigned long long)a0;
+ (id)fromWidth:(int)a0 height:(int)a1;
+ (id)loadFromData:(id)a0;

- (id)initWithBackingAspectRatio:(const void *)a0;
- (BOOL)isValid;
- (id)toString;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)saveToData;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
