@interface AWEIMEmoticonLayoutCache : NSObject

@property (nonatomic) double viewWidth;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) int preferredColumn;
@property (nonatomic) int actualColumn;

@end
