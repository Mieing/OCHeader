@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, UIImageView, UILabel, UIButton;
@protocol AWEMerchandiseComponentEmptyResultItemViewDelegate;

@interface AWEMerchandiseComponentEmptyResultItemView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *closeIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWEMerchandiseComponentEmptyResultItemViewDelegate> delegate;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;

+ (double)titleWidthWithModel:(id)a0;
+ (double)widthWithComponentModel:(id)a0;

- (void)configWithComponentModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)closeButtonAction;

@end
