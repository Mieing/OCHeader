@class NSString, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardImgModel : BDPCDDynamicCardAtomicModel

@property (copy, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;
@property (nonatomic) struct CGSize { double width; double height; } rawSize;

- (struct CGSize { double x0; double x1; })imageDisplaySizeWithOriginalWidth:(double)a0 imageOriginalSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)imageModelValidate;
- (BOOL)isAutoWidth;
- (struct CGSize { double x0; double x1; })iamgeViewSizeWithOriginalWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
