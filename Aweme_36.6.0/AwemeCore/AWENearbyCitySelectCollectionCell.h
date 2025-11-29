@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWENearbyCitySelectCollectionCell : UICollectionViewCell <AWEWaterFallCellProtocol>

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *locationImageView;
@property (retain, nonatomic) UILabel *currentLocationLabel;
@property (retain, nonatomic) UIView *leftPanelContainerView;
@property (retain, nonatomic) UIView *rightPanelContainerView;
@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (nonatomic) double bgAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (void)updateBackgroundImage:(id)a0;
- (void)setCurrentCity:(id)a0 isLocated:(BOOL)a1;
- (void)updateBackgroundAlpha:(double)a0;
- (void)setupUIInFeedContainer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
