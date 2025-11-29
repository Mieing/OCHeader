@class AWEFlashMobFlashTitleConfig;

@interface ACCMordernQuickFlashStickerInputTextView : UITextView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultEdgeInsets;
@property (retain, nonatomic) AWEFlashMobFlashTitleConfig *titleCellModel;
@property (copy, nonatomic) id /* block */ heightDidChangedBlock;
@property (copy, nonatomic) id /* block */ widthDidChangedBlock;

- (void)changeFonfForTextView:(id)a0;
- (void)textWidthShoudChange:(id)a0;
- (unsigned long long)numberOfLinesWithText:(id)a0;
- (unsigned long long)numberOfLinesWithText:(id)a0 fontSize:(double)a1;
- (id)initWithTextCellModel:(id)a0;
- (void)updateTextColorWithStr:(id)a0 placeholderColorStr:(id)a1;
- (void)updateDisplayTextAlignment;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
