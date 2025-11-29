@class NSString;

@interface BTTextItemCellViewModel : BTReaderItemCellViewModel <RichTextLayoutDelegate>

@property (nonatomic) BOOL isFullText;
@property (readonly, nonatomic) BOOL canFullText;
@property (readonly, nonatomic) unsigned long long parserTypes;
@property (readonly, nonatomic) BOOL digestShowTailFold;
@property (readonly, nonatomic) double currTitleAreaHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateViewModelWithReaderWrap:(id)a0 msgWrap:(id)a1;

- (id)itemViewClassName;
- (void)switchFullText;
- (double)viewHeight;
- (double)textAreaMarginBottom;
- (id)titleFont;
- (double)titleLineSpace;
- (struct CGSize { double x0; double x1; })titleSize;
- (unsigned long long)titleLineNumber;
- (id)titleLabelStyles;
- (id)coverImgURL;
- (double)titleMaxWidth;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;

@end
