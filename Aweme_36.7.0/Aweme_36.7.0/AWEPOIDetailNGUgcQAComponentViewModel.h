@class AWEPOIFeedUgcQAEntranceInfoModel, AWEPOIDetailNGPageContext, AWEPOIDetailNGUgcQAComponentView, NSNumber;

@interface AWEPOIDetailNGUgcQAComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUgcQAComponentView *componentView;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *info;
@property (retain, nonatomic) NSNumber *bottomMargin;

+ (BOOL)didReachBottomWithScrollView:(id)a0;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (BOOL)canFloatingQAButton;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
