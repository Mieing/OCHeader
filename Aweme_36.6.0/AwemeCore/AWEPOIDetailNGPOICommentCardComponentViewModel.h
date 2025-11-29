@class AWEPOIDetailInfoRateCardCellViewModel;

@interface AWEPOIDetailNGPOICommentCardComponentViewModel : DitoComponentViewModel

@property (nonatomic) BOOL isClose;
@property (nonatomic) BOOL showCommentBar;
@property (retain, nonatomic) AWEPOIDetailInfoRateCardCellViewModel *bizViewModel;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (void)componentViewWillShow;
- (void)setupBizViewModel;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
