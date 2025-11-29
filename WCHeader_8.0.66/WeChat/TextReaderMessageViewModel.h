@class NSString, UIFont, NSMutableArray;

@interface TextReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate> {
    struct CGSize { double width; double height; } _mainTitleSize;
    NSMutableArray *_mainTitleStyles;
    long long _mainTitleLineCount;
    struct CGSize { double width; double height; } _partTitleSize;
    NSMutableArray *_partTitleStyles;
    BOOL _isPartTitleTruncated;
    long long _partTitleLineCount;
    double _viewHeight;
    double m_textViewMaxheight;
}

@property (readonly, nonatomic) BOOL isLongText;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *mainTitleFont;
@property (readonly, nonatomic) NSString *mainTitleText;
@property (readonly, nonatomic) NSMutableArray *mainTitleStyles;
@property (readonly, nonatomic) double textLineSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)messageNodeViewHeight;
- (struct CGSize { double x0; double x1; })mainTitleSize;
- (struct CGSize { double x0; double x1; })titleSize;
- (void)calTitleSizeAndTitleStyles;
- (double)titleMaxWidth;
- (id)titleStyles;
- (BOOL)hasMainTitle;
- (long long)lineCount;
- (unsigned int)maxContentLineNum;
- (id)bottomStr;
- (void).cxx_destruct;

@end
