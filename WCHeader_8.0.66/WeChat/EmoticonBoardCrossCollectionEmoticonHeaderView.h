@class UIView, MMBadgeView, MMWebImageView, UITapGestureRecognizer, NSString, UIImageView, WXKeyBoardTipsView, PersonalDesigner, MMUILabel, UILabel, EmoticonBoardCrossCollectionEmoticonHeaderModel;

@interface EmoticonBoardCrossCollectionEmoticonHeaderView : UICollectionReusableView <IStoreEmotionDesignerInfoMgrExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecongnizer;
@property (retain, nonatomic) MMUILabel *designerNameLabel;
@property (retain, nonatomic) MMWebImageView *designerHeadView;
@property (retain, nonatomic) UIImageView *entryTipView;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) UIView *voiceOverView;
@property (retain, nonatomic) WXKeyBoardTipsView *keyboardTipsView;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (retain, nonatomic) EmoticonBoardCrossCollectionEmoticonHeaderModel *viewModel;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)handleSingleTap:(id)a0;
- (void)jumpToPlugin;
- (void)onGetDesignerForDesignerUin:(unsigned int)a0 AndDesigner:(id)a1;
- (void).cxx_destruct;

@end
