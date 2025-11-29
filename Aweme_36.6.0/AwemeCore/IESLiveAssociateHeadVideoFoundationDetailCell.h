@class NSString, UIImageView, UILabel, IESLiveAssociateHeadVideoFoundationDetailItemDescription;

@interface IESLiveAssociateHeadVideoFoundationDetailCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftGuideImageView;
@property (retain, nonatomic) UILabel *leftBottomText;
@property (retain, nonatomic) UIImageView *rightGuideImageView;
@property (retain, nonatomic) UILabel *rightBottomText;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailItemDescription *itemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithModel:(id)a0;

- (void)bindViewModel:(id)a0;
- (void)setupGuideImageWithImageView:(id)a0 withURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
