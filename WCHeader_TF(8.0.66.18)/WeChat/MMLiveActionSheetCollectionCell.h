@class MMScrollActionSheetItem, MMUILabel, MMUIButton;
@protocol MMLiveActionSheetCollectionCellDelegate;

@interface MMLiveActionSheetCollectionCell : UICollectionViewCell

@property (weak, nonatomic) id<MMLiveActionSheetCollectionCellDelegate> cellDelegate;
@property (retain, nonatomic) MMUIButton *itemButton;
@property (retain, nonatomic) MMUILabel *itemNameLabel;
@property (retain, nonatomic) MMUILabel *itemSubtitleLabel;
@property (retain, nonatomic) MMScrollActionSheetItem *actionSheetItem;
@property (nonatomic) BOOL disableInnerRedDotLogic;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithActionSheetItem:(id)a0;
- (void)updateItemButtonColor;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)updateRedDot;
- (void)onTaped;
- (void).cxx_destruct;

@end
