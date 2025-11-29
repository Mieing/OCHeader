@class NSString, UIImageView, UIView, MMUIButton, MMUILabel;

@interface StorageCacheClassCell : UITableViewCell

@property (retain, nonatomic) UIImageView *selectIconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *sizeLabel;
@property (retain, nonatomic) MMUIButton *arrImgButton;
@property (retain, nonatomic) UIView *expandTapView;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *sizeString;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isGreyText;
@property (copy, nonatomic) id /* block */ detailAction;

+ (double)sizeLabelMaxWidth;
+ (double)estimateTitleLabelHeigth:(id)a0 viewWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (void)runDetailAction;
- (void).cxx_destruct;

@end
