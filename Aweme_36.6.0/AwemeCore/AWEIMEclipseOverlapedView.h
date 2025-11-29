@class NSArray, AWEIMEclipseOverlapedViewConfig;

@interface AWEIMEclipseOverlapedView : UIView

@property (copy, nonatomic) NSArray *imgViewArr;
@property (retain, nonatomic) AWEIMEclipseOverlapedViewConfig *config;

- (void)__addKVO;
- (void)__setupUIWithConfig:(id)a0;
- (void)__lastItemTapped:(id)a0;
- (void)__updateImages;
- (struct CGSize { double x0; double x1; })getSizeForView;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
