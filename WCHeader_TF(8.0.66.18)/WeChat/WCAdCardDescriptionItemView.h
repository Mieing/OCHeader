@class MMUILabel, WCAdSellingPointInfo, WCAdURLImageView;

@interface WCAdCardDescriptionItemView : UIView

@property (retain, nonatomic) WCAdSellingPointInfo *itemInfo;
@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;

+ (double)heightWithItemInfo:(id)a0 buttonStyle:(long long)a1 maxWidth:(double)a2;
+ (double)heightForWording:(id)a0 font:(id)a1 maxWidth:(double)a2 isSingleLine:(BOOL)a3;
+ (double)wordingMaxWidthForWidth:(double)a0 iconUrl:(id)a1;
+ (id)fontForTitleWithItemInfo:(id)a0 buttonStyle:(long long)a1;
+ (id)fontForDescWithItemInfo:(id)a0 buttonStyle:(long long)a1;
+ (id)textColorForDescWithItemInfo:(id)a0 buttonStyle:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemInfo:(id)a1 buttonStyle:(long long)a2;
- (void)generateViews;
- (void)layoutSubviews;
- (id)createTextViewWithContent:(id)a0 textColor:(id)a1 font:(id)a2 maxWidth:(double)a3 isSingleLine:(BOOL)a4;
- (void)updateWidthForRichTextView:(id)a0;
- (void).cxx_destruct;

@end
