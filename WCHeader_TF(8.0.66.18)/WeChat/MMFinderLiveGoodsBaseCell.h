@class UIImageView, UIView;
@protocol MMFinderLiveGoodsBaseCellDelegate;

@interface MMFinderLiveGoodsBaseCell : MMMultiMenuTableViewCell

@property (nonatomic) BOOL m_bSelected;
@property (nonatomic) unsigned int m_iAnimatedCount;
@property (nonatomic) BOOL m_bAnimated;
@property (retain, nonatomic) UIImageView *m_selectedImageView;
@property (nonatomic) BOOL m_bIsEditting;
@property (nonatomic) BOOL m_bShowSelectedFlag;
@property (retain, nonatomic) UIView *reorderView;
@property (weak, nonatomic) id<MMFinderLiveGoodsBaseCellDelegate> multiSelectDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)resetState;
- (void)addSelectedImageViewIfNeeded;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)customTableViewCellRecorderControl;
- (void)changeSelectedStatus:(BOOL)a0;
- (double)adjustedLeftOffsetForEditing;
- (double)selectedButtonLeftMargin;
- (struct CGSize { double x0; double x1; })selectedButtonSize;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (void).cxx_destruct;

@end
