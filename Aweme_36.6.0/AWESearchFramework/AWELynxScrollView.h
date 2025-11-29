@class NSString, AWEGeneralSearchScrollTailView;

@interface AWELynxScrollView : LynxUI <UIScrollViewDelegate>

@property (retain, nonatomic) NSString *bounceToDetailSchema;
@property (retain, nonatomic) AWEGeneralSearchScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__695;
+ (id)__lynx_prop_config__582;
+ (id)__lynx_prop_config__736;

- (void)layoutDidFinished;
- (void)index:(long long)a0 requestReset:(BOOL)a1;
- (void)detailSchema:(id)a0 requestReset:(BOOL)a1;
- (void)detailTextName:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)updateContentSize;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)createView;

@end
