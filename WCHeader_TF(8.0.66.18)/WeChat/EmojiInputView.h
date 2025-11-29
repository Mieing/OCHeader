@class NSArray, NSMutableArray;

@interface EmojiInputView : UIView

@property (copy, nonatomic) id /* block */ tapEmojiHandler;
@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) NSArray *emojiList;

+ (id)emojiListForScene:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)updateLayout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapButton:(id)a0;
- (void).cxx_destruct;

@end
