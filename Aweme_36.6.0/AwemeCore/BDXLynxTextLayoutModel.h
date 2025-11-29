@class YYTextLayout, BDXLynxRichTextStyle, NSAttributedString, YYLabel;

@interface BDXLynxTextLayoutModel : NSObject {
    YYLabel *_truncationLabel;
}

@property (weak, nonatomic) BDXLynxRichTextStyle *textStyle;
@property (retain, nonatomic) YYTextLayout *textLayout;
@property (retain, nonatomic) NSAttributedString *truncationToken;

+ (id)createTextModelWithStyle:(id)a0;

- (void)createTruncationToken:(id)a0;
- (id)truncationLabel;
- (void)createLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
