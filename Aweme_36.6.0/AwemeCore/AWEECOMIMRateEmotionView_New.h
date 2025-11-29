@class AWEECOMIMTextViewComponent, UICollectionView, NSString, UIView, AWEECOMIMRateServiceModel;

@interface AWEECOMIMRateEmotionView_New : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEECOMIMTextViewComponentDelegate>

@property (retain, nonatomic) UICollectionView *emotionListView;
@property (retain, nonatomic) UIView *tagListView;
@property (retain, nonatomic) AWEECOMIMTextViewComponent *textView;
@property (retain, nonatomic) AWEECOMIMRateServiceModel *model;
@property (copy, nonatomic) id /* block */ didSendTextBlock;
@property (copy, nonatomic) id /* block */ ratingModifyBlock;
@property (copy, nonatomic) id /* block */ updateHeightBlock;
@property (nonatomic) BOOL webPPlayEnable;
@property (nonatomic) double maxContentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)inputViewHeight;
+ (double)tagTopPadding;
+ (double)tagInputVPadding;
+ (BOOL)isDefaultTagSelectedWithModel:(id)a0;
+ (double)tagItemHeight;
+ (double)vPaddingBetweenTags;
+ (id)tagSelectFont;
+ (id)tagNormalFont;
+ (BOOL)shouldShowInputViewWithServiceModel:(id)a0;
+ (id)tagSelectedColor;
+ (id)tagBgSelectedColor;
+ (id)tagNomarColor;
+ (id)tagBgNormalColor;
+ (double)currentHeightWithModel:(id)a0 maxWidth:(double)a1;

- (void)updateTagBtn:(id)a0 isSelected:(BOOL)a1;
- (void)tagSelected:(id)a0;
- (double)currentHeightWithModel:(id)a0;
- (void)refreshEmotionList;
- (void)updateEmotionContentHeightWithModel:(id)a0;
- (void)updateTextViewWithShowLimitCount:(BOOL)a0;
- (double)cellHeightWithIconHeight:(double)a0;
- (void)textView:(id)a0 textDidChange:(id)a1;
- (void)textViewDidSendAction:(id)a0;
- (void)updateViewWithModel:(id)a0 maxContentWidth:(double)a1;
- (void)updateTagListViewWithList:(id)a0 selectedTagList:(id)a1 maxCountForRow:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;

@end
