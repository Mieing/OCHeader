@class UIButton, UILabel, NSString;

@interface WCDragBarButtonView : UIButton

@property (nonatomic) long long option;
@property (retain, nonatomic) UIButton *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *selectedTitle;

- (id)initWithImage:(id)a0 selectedImage:(id)a1 title:(id)a2 selectedTitle:(id)a3 bgColor:(id)a4 selectedBGColor:(id)a5;
- (void)layoutSubviews;
- (double)dynamicFontSize;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
