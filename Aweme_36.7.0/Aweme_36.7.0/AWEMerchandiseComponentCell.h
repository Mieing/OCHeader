@class NSString, AWEMerchandiseComponentView, AWEDoubleColumnSearchMerchandiseFilterManager, AWEDoubleColumnSearchMerchandiseModel, NSDictionary, UIView;
@protocol AWEMerchandiseComponentCellDelegate;

@interface AWEMerchandiseComponentCell : UICollectionViewCell <AWEMerchandiseComponentViewDelegate>

@property (retain, nonatomic) AWEMerchandiseComponentView *componentView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (weak, nonatomic) id<AWEMerchandiseComponentCellDelegate> cellDelegate;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (retain, nonatomic) UIView *lineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)sortCardheightForModel:(id)a0 config:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a1;
+ (double)sortCardheightForModel:(id)a0;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)afterLayoutFirstPageRealDataWithContext:(id)a0;
- (void)scrollModelToVisible:(id)a0 animated:(BOOL)a1;
- (void)componentView:(id)a0 itemView:(id)a1 didSelectItemWithFilterComponentModel:(id)a2;
- (BOOL)componentView:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)componentItemView:(id)a0 didSelectTabWithTabType:(id)a1;
- (void)configWithModel:(id)a0 config:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)updateWithConfig:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
