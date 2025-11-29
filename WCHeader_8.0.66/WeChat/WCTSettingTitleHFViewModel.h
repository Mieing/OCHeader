@class NSString, NSAttributedString, UIColor;

@interface WCTSettingTitleHFViewModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSAttributedString *attrTitle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) unsigned long long accessibilityTraits;

+ (id)createWithTitle:(id)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)createHeaderWithTitle:(id)a0;
+ (id)createFooterWithTitle:(id)a0;

- (double)heightByViewWidth:(double)a0;
- (void).cxx_destruct;

@end
