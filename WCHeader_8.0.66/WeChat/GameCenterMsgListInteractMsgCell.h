@class MMWebImageView, RichTextView, MMUILabel;

@interface GameCenterMsgListInteractMsgCell : GameCenterMsgListBaseCell

@property (retain, nonatomic) RichTextView *commentView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *descImageView;
@property (retain, nonatomic) MMUILabel *countLabel;

+ (id)convertRichText:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupGameCenterMsgListInteractMsgCell;
- (void)updateWithCellData:(id)a0;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
