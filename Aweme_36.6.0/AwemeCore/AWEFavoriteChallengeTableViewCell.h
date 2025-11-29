@interface AWEFavoriteChallengeTableViewCell : AWEUIFavoriteTableViewCell

+ (double)extraHeight;
+ (BOOL)fontOpt;
+ (id)identifier;
+ (double)cellHeight;

- (double)coverImageHeight;
- (void)updateSubTitleLabelText:(id)a0;
- (void)updateTitleLabelText:(id)a0 model:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)configureWithModel:(id)a0;

@end
