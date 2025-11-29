@class UILabel, UIColor, NSString;

@interface AWEIMMessageCellTagLabel : UIView <AWEIMMessageCellTagViewInterface>

@property (nonatomic) long long role;
@property (retain, nonatomic) UILabel *internalLabel;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct CGSize { double width; double height; } contentIntrinsicContentSize;
@property (nonatomic) long long scene;
@property (nonatomic) double leftAndRightSpace;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundViewColor;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)fontSizeWithScene:(long long)a0;

- (void)updateTagText:(id)a0 style:(unsigned long long)a1;
- (void)updateRole:(long long)a0;
- (void)p_updateRoleTagColor;
- (void)sizeWidthToFitLabelHeightWithFixedHeight:(double)a0;
- (void)updateRole:(long long)a0 backgroundColor:(id)a1 textColor:(id)a2;
- (void)clickActiveTag:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithScene:(long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
