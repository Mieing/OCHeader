@class FavoritesItem, MMUIImageView, NSString, MMFavImageComponent, UIView, FavMultiMenuTableViewCell, MMFavBaselineComponent, MMFavBigImageFieldComponent, MMFavTextComponent;
@protocol MMFavCellComponentDelegate;

@interface MMFavCellComponent : MMComponent <IFavoritesExt, INetworkStatusMgrExt, MMFavImageComponentDelegate> {
    MMUIImageView *m_selectedView;
    MMUIImageView *m_deselectedView;
    MMFavBaselineComponent *m_baselineCom;
    MMFavImageComponent *m_imageCom;
    MMFavTextComponent *m_textCom;
    MMFavBigImageFieldComponent *m_bigImageFieldCom;
    UIView *m_contentView;
    BOOL m_editing;
    BOOL m_bShorten;
}

@property (retain, nonatomic) FavoritesItem *favItem;
@property (weak, nonatomic) id<MMFavCellComponentDelegate> delegate;
@property (weak, nonatomic) FavMultiMenuTableViewCell *parentCellView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calHeightWithComData:(id)a0;

- (void)setHighlightContent:(id)a0 Keywords:(id)a1;
- (BOOL)isPadStyle;
- (void)configContentLayout;
- (unsigned long long)cellStyle;
- (void)configSelectViewWith:(id)a0 offsetX:(double)a1 isAccessibilityElement:(BOOL)a2;
- (void)changeSelectStatu:(BOOL)a0;
- (BOOL)hasSelectedState;
- (BOOL)isPurgeStyle;
- (void)changeEditingStatus:(BOOL)a0 animated:(BOOL)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (id)getThumbComponent;
- (id)getThumbImageView;
- (id)getCdnImgView;
- (void)favMusicBeignToPlay:(id)a0;
- (BOOL)enableTingListMode;
- (void)configBaselineComponent;
- (void)configImageComponent;
- (void)configTextComponent;
- (void)onClickDetailBtn:(id)a0;
- (void)configFavCell;
- (void)layoutPurgeBtn:(id)a0 offsetX:(double)a1;
- (void)onClickPurgeBtn:(id)a0;
- (void)onClickPurgeSelectBtn:(id)a0;
- (void)layoutSubviewsAfterChangeContentX:(double)a0;
- (void).cxx_destruct;

@end
