@class NSString, IESECGoodsFeedItemCardCellConfiguration, IESECGoodsFeedVerticalInformationView, UIImageView, IESECLLView, IESECGoodsFeedCardOperationView, IESECGoodsFeedItemCardCellModel, IESECGoodsFeedItemCardSkeletonView, UILabel;

@interface IESECGoodsFeedItemCardCell : IESECGoodsFeedBaseCell <IESECGoodsFeedCardOperationViewDelegate, IESECGoodsFeedVerticalInformationViewDelegate> {
    IESECLLView *_containerView;
    IESECGoodsFeedItemCardCellModel *_cellModel;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *imageTipsLabel;
@property (retain, nonatomic) IESECGoodsFeedVerticalInformationView *informationView;
@property (retain, nonatomic) IESECGoodsFeedItemCardSkeletonView *skeletonView;
@property (retain, nonatomic) IESECGoodsFeedItemCardCellConfiguration *configuration;
@property (readonly, nonatomic) IESECGoodsFeedCardOperationView *operationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCellModel:(id)a0;
- (void)operationView:(id)a0 didSelectItemWithType:(unsigned long long)a1;
- (id /* block */)cardBuilderConfigurator;
- (void)notifyDelegateSelectEventWithType:(unsigned long long)a0;
- (void)updateCardStyle:(unsigned long long)a0;
- (void)informationViewBuyButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;
- (void)handleTapGesture:(id)a0;

@end
