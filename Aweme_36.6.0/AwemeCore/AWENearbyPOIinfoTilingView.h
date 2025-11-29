@class NSArray, NSString, UIScrollView, YYLabel;

@interface AWENearbyPOIinfoTilingView : UIView

@property (copy, nonatomic) NSArray *viewsArray;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double imageWidth;
@property (retain, nonatomic) YYLabel *textLabel;
@property (copy, nonatomic) NSString *text;

- (void)configViews:(id)a0 layoutType:(unsigned long long)a1;
- (void)layoutViewsWithTree;
- (void)layoutViewsWithScrollview;
- (void)addTextLabel;
- (void).cxx_destruct;
- (id)init;

@end
