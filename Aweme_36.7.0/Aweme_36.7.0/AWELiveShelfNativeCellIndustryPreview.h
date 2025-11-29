@class UIImageView, UILabel, UIView;

@interface AWELiveShelfNativeCellIndustryPreview : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIView *previewImageView;
@property (retain, nonatomic) UIView *rightRegionView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *summaryTextView;
@property (copy, nonatomic) id /* block */ industryPreviewClickedBlock;

- (void)setupWithPreviewImages:(id)a0 previewTitleImageUrl:(id)a1 summaryText:(id)a2 backgroundImageUrl:(id)a3 arrowImageUrl:(id)a4;
- (id)convertToColor:(id)a0;
- (void)industryPreviewClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
