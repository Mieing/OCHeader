@class NSString;

@interface BDBlurHashConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *blurHash;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) int punch;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
