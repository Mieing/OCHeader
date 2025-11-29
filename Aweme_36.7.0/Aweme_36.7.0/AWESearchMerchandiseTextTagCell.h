@class AWEMerchandiseComponentEmptyResultView, UIView, NSString, AWEEcomPhotoSearchSectionTitleView, UIImageView, AWEDoubleColumnSearchMerchandiseFilterManager, NSDictionary, CAGradientLayer, YYLabel, UILabel;
@protocol AWESearchMerchandiseTextTagCellDelegate;

@interface AWESearchMerchandiseTextTagCell : AWESearchCachalotECommerceBaseCell <AWEMerchandiseComponentEmptyResultViewDelegate>

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIView *textLabelBG;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) AWEMerchandiseComponentEmptyResultView *emptyResultView;
@property (retain, nonatomic) AWEEcomPhotoSearchSectionTitleView *sectionTitleView;
@property (retain, nonatomic) CAGradientLayer *leftLayer;
@property (retain, nonatomic) CAGradientLayer *rightLayer;
@property (retain, nonatomic) UIImageView *imageSearchEmptyView;
@property (weak, nonatomic) id<AWESearchMerchandiseTextTagCellDelegate> delegate;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)heightForModel:(id)a0 filterManager:(id)a1 containerWidth:(double)a2;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)emptyResultView:(id)a0 didClickClearWithModel:(id)a1;
- (void)addGradientLayerWithOffsetY:(double)a0;
- (void)removeGradientLayer;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
