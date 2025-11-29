@class FavAttributeCPLabel, RichTextView;

@interface MMFavTextComponent : MMComponent {
    RichTextView *m_titleLabel;
    FavAttributeCPLabel *m_titleSearchLabel;
    FavAttributeCPLabel *m_desLabel;
}

+ (double)calHeightWithComData:(id)a0;
+ (id)getCurTitleFont:(id)a0;
+ (id)getCurDescFont:(id)a0;
+ (double)getCurTitleLineNum:(id)a0;
+ (double)getCurDesLineNum:(id)a0;

- (BOOL)isEmpty;
- (void)setHighlightContent:(id)a0 Keywords:(id)a1;
- (void)configLabel;
- (void)changeWidth:(double)a0;
- (void)configContentLayout;
- (void).cxx_destruct;

@end
