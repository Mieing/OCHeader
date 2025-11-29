@class UIView, NSString, UIImageView, UIButton, WCMktCardItemView, UrlLabel, CardHomePageElement, WCPayWebImageView, MMUILabel;
@protocol WCMktMerchantItemCellDelegate;

@interface WCMktMerchantItemCell : MMMultiMenuTableViewCell <WCMktCardItemViewDelegate, ILinkEventExt>

@property (retain, nonatomic) CardHomePageElement *elemData;
@property (nonatomic) BOOL bIsExpandCardList;
@property (nonatomic) BOOL bIsLastItem;
@property (retain, nonatomic) WCPayWebImageView *merchatLogoImgView;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) UrlLabel *merchatNameLabel;
@property (retain, nonatomic) MMUILabel *tradeRelationLabel;
@property (retain, nonatomic) UIView *merchatTagListView;
@property (retain, nonatomic) UIButton *mchActTagBtn;
@property (retain, nonatomic) WCMktCardItemView *cardItemView;
@property (retain, nonatomic) UIButton *expandBtn;
@property (retain, nonatomic) UIView *sepBarView;
@property (retain, nonatomic) UIButton *merchantAreaBtn;
@property (weak, nonatomic) id<WCMktMerchantItemCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calcCellHeightWithMerchantData:(id)a0 isExpandCardList:(BOOL)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)updateContentWithData:(id)a0 isExpandCardList:(BOOL)a1 bIsLastItem:(BOOL)a2;
- (void)updateTagButtonWithElemMchLabelData:(id)a0 tagBtn:(id)a1;
- (id)genTagButtonWithElemMchLabelData:(id)a0;
- (void)expandBtnClick:(id)a0;
- (void)onMerchantAreaBtnClick;
- (void)onCardItemViewClickTagBtnToOpenTinyApp:(id)a0;
- (void)onCardItemViewClickCardWithCardID:(id)a0 cardIndex:(unsigned int)a1;
- (void)onLinkClicked:(id)a0 backupUrl:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;

@end
