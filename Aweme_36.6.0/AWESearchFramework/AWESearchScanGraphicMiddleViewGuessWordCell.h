@class NSString, UIImageView, UIView, DUXBaseLabel;

@interface AWESearchScanGraphicMiddleViewGuessWordCell : DUXBaseTableViewCell

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *completeIcon;
@property (retain, nonatomic) DUXBaseLabel *wordLabel;
@property (retain, nonatomic) DUXBaseLabel *tagLabel;
@property (copy, nonatomic) NSString *guessTag;
@property (copy, nonatomic) NSString *guessWord;
@property (nonatomic) BOOL supportDrakTheme;
@property (retain, nonatomic) UIView *separatorLine;
@property (copy, nonatomic) id /* block */ completeTextBlock;

- (void)layoutCellWithGuessWord:(id)a0 andTag:(id)a1;
- (void)layoutSearchIcon;
- (void)layoutCompleteIcon;
- (void)layoutWordLabel;
- (void)layoutTagLabel;
- (void)layoutSeparatorLine;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)completeText;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)colorNamed:(id)a0;

@end
