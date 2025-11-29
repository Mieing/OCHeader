@interface BDXBridgeStudioCompressImageResultItem : BDXBridgeStudioCompressImageResultImageArray

@property (nonatomic) BOOL isOriginal;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (nonatomic) double realQuality;

- (id)desc;

@end
