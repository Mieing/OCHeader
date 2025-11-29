@interface WeAppCore.WAMenuHeaderDishItemView : MMUIView <WARichTextViewHelperDelegate> {
    void /* unknown type, empty encoding */ itemViews;
    void /* unknown type, empty encoding */ richTextHelpers;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ fontSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateWithDishItemList:(id)a0 linkText:(id)a1;
- (void)onLinkClicked:(id)a0 linkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
