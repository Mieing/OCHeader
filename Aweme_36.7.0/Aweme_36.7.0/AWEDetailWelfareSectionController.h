@class NSString, IESServiceProvider, AWEDetailWelfareView, AWEDetailWelfareModel;

@interface AWEDetailWelfareSectionController : IGListSectionController <AWEDetailWelfareViewDelegate>

@property (retain, nonatomic) AWEDetailWelfareModel *object;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) AWEDetailWelfareView *welfareView;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)welfareView:(id)a0 didUpdateHeightTo:(double)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
