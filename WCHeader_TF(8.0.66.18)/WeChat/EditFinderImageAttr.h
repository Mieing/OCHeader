@class NSMutableArray;

@interface EditFinderImageAttr : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableArray *unCropImagesArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreenRectInScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectInScreen;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)genEditCropRectWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
