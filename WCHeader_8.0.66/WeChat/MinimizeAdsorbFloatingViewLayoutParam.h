@interface MinimizeAdsorbFloatingViewLayoutParam : NSObject

@property (nonatomic) unsigned long long positionType;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) struct CGSize { double width; double height; } outerContentSize;
@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;

+ (id)genLayoutParamWithPositionType:(unsigned long long)a0 contentType:(unsigned long long)a1 outerContentSize:(struct CGSize { double x0; double x1; })a2 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 animated:(BOOL)a4 duration:(double)a5;

@end
