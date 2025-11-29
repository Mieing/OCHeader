@class NSString, NSDictionary, UILabel, AWEECOMIMRateServiceModel, UIView;

@interface AWEECOMIMNewRateResolveOldView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tagListView;
@property (retain, nonatomic) AWEECOMIMRateServiceModel *rateModel;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSDictionary *tagTitleValueDict;
@property (copy, nonatomic) id /* block */ modifyResolveBlock;

+ (double)viewHeightWithResolveModel:(id)a0 width:(double)a1;
+ (id)titleFont;

- (void)updateTagBtn:(id)a0 isSelected:(BOOL)a1;
- (void)tagSelected:(id)a0;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
