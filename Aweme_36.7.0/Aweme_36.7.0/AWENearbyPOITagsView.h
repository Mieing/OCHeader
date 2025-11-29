@class NSString, UIColor, UIFont;

@interface AWENearbyPOITagsView : UIView

@property (copy, nonatomic) NSString *accessibilityLabelText;
@property (nonatomic) double hight;
@property (nonatomic) double tagCornerRadius;
@property (retain, nonatomic) UIColor *firstTextColor;
@property (retain, nonatomic) UIColor *firstBgColor;
@property (retain, nonatomic) UIFont *firstFont;
@property (retain, nonatomic) UIColor *otherTextColor;
@property (retain, nonatomic) UIColor *otherBgColor;

- (double)contentMaxWidth;
- (void)configTagsViewWithModel:(id)a0;
- (id)createTagViewWithShadow:(BOOL)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
