@class IESServiceProvider, UIView, DUXBaseLabel, DUXBaseImageView, CAGradientLayer, DUXBaseButton, NSNumber, AWEDetailAILoraProfileModel;

@interface AWEAILoraProfileCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEDetailAILoraProfileModel *model;
@property (nonatomic) BOOL hadSetCellPhotoView;
@property (retain, nonatomic) UIView *separateLine;
@property (copy, nonatomic) NSNumber *canShowCell;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *loraPhotoView;
@property (retain, nonatomic) DUXBaseLabel *loraCreateTime;
@property (retain, nonatomic) DUXBaseLabel *loraName;
@property (retain, nonatomic) DUXBaseButton *manageButton;
@property (retain, nonatomic) CAGradientLayer *fadeOutLayer;

- (void)p_addSubviews;
- (void)setCellElementHide:(BOOL)a0;
- (void)manageButtonPressed;
- (void)p_bindModelObserve;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)updateUIWithThemeStyleIfNeed;
- (void)updatePhotoViewIfNeed;
- (void)updateCreateTimeIfNeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
