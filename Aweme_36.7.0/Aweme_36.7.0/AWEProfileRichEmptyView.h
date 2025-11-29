@class NSString, UIImage, NSAttributedString, UIImageView, MASConstraint, NSMutableArray, YYLabel, UILabel;

@interface AWEProfileRichEmptyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *accessibilityViewArray;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MASConstraint *titleTopConstraint;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedDetail;
@property (copy, nonatomic) NSString *detail;

- (void)updateIconLayout;
- (void)clearAccessibilityViewArray;
- (void)updateRichAccessibility;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
