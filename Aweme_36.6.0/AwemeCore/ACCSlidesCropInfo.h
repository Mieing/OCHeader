@class UIImage, NSString;

@interface ACCSlidesCropInfo : NSObject

@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) long long cropRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) BOOL hasCropped;
@property (readonly, copy, nonatomic) NSString *cropRatioString;

+ (id)cropRatioString:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end
