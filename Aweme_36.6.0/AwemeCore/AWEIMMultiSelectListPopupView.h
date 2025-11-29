@class NSString, UIImageView, UICollectionView, AWEIMMultiSelectListPopupViewModel, UILabel;

@interface AWEIMMultiSelectListPopupView : AWEIMBasePopupView <UICollectionViewDelegate, AWEIMMultiSelectListPopupCollectionViewCellDelegate>

@property (retain, nonatomic) AWEIMMultiSelectListPopupViewModel *viewModel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *titleText;
@property (retain, nonatomic) UILabel *explanationText;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowing;

- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (id)colorInLightTheme:(id)a0;
- (void)cell:(id)a0 selectStatusDidChange:(BOOL)a1;
- (id)diffableDatasource;
- (void)p_configContents;
- (void)p_configGestures;
- (void)onConfirmBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)hide;
- (void)show;

@end
