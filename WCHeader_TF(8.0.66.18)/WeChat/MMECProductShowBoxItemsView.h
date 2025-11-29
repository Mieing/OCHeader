@class NSArray, MMECProductShowBoxItemsViewConfig;

@interface MMECProductShowBoxItemsView : UIView

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *views;
@property (retain, nonatomic) MMECProductShowBoxItemsViewConfig *config;
@property (copy, nonatomic) id /* block */ onSecKillArriveTime;
@property (readonly, nonatomic) NSArray *visibleShowBoxItems;

+ (double)spacing;
+ (double)borderImageLabelImageToText;
+ (BOOL)canShowAtLeastOneForSize:(struct CGSize { double x0; double x1; })a0 config:(id)a1 items:(id)a2;
+ (double)heightWithWidth:(double)a0 config:(id)a1 items:(id)a2;
+ (id)createTextItemBy:(id)a0;
+ (id)basicLabelParamsForTextItem:(id)a0 withConfig:(id)a1;
+ (double)widthForTextItem:(id)a0 withConfig:(id)a1;
+ (BOOL)canShowTextItem:(id)a0 withConfig:(id)a1 inWidth:(double)a2;
+ (double)widthForImageWithPictureInfo:(id)a0 height:(double)a1;
+ (BOOL)canShowImageWithPictureInfo:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthForSecKillLabel:(id)a0 withConfig:(id)a1;
+ (BOOL)canShowSecKillLabel:(id)a0 withConfig:(id)a1 inWidth:(double)a2;
+ (BOOL)_itemsFilter:(id)a0 config:(id)a1;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createViewBy:(id)a0;
- (id)createImageTextLabelWithTextItem:(id)a0;
- (id)createImageWithPictureInfo:(id)a0;
- (id)createSecKillLabel:(id)a0;
- (void)useShowBoxItemViews:(id)a0;
- (void)updateWithItems:(id)a0;
- (void).cxx_destruct;

@end
