@class AWEEcomAISearchResultHeaderModel, AWEEcomAISearchResultNormalSearchHeaderView, AWEEcomAISearchResultProductInquiryHeaderView;

@interface AWEEcomAISearchResultHeaderView : UIView

@property (retain, nonatomic) AWEEcomAISearchResultNormalSearchHeaderView *normalSearchView;
@property (retain, nonatomic) AWEEcomAISearchResultProductInquiryHeaderView *productInquiryView;
@property (retain, nonatomic) AWEEcomAISearchResultHeaderModel *model;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (copy, nonatomic) id /* block */ productTappedBlock;

- (void)updateSelfHeight;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;

@end
