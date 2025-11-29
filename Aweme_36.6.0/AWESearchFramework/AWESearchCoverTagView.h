@class UIImageView, UILabel, AWESearchCoverTagComponentModel;

@interface AWESearchCoverTagView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWESearchCoverTagComponentModel *model;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;
+ (id)textLabelFontWithModel:(id)a0;

- (void)configDataWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
