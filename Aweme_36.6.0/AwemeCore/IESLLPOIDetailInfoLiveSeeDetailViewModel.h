@class UILabel, UIImageView, IESLLPOIDetailStore;

@interface IESLLPOIDetailInfoLiveSeeDetailViewModel : IESLLPOIDetailInfoSeparatorViewModel

@property (retain, nonatomic) UILabel *labelTitle;
@property (retain, nonatomic) UIImageView *imageViewArrow;
@property (retain, nonatomic) IESLLPOIDetailStore *store;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (void)setupViewModel;
- (void)didTapDetail:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
