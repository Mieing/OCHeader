@class AWEGDGrouponDetailQualificationComponentView, AWEGDQualificationModel;

@interface AWEGDGrouponDetailQualificationComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL hasShown;
@property (weak, nonatomic) AWEGDGrouponDetailQualificationComponentView *cell;
@property (retain, nonatomic) AWEGDQualificationModel *vo;
@property (nonatomic) double customComponentHeight;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)handleExposeEvent;
- (void)componentViewWillShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
