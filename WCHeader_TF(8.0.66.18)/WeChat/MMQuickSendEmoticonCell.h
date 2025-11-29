@class UIView, NSString, MMWebImageView, CEmoticonWrap, MMEmoticonView, MMQuickSendEmoticonSearchCellView, UILabel, SightIconView;

@interface MMQuickSendEmoticonCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt> {
    UIView *m_backgroundView;
}

@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL needPlayGif;
@property (retain, nonatomic) MMQuickSendEmoticonSearchCellView *searchView;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) MMWebImageView *thumbView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)showBackgroundView;
- (void)setHighlighted:(BOOL)a0;
- (void)setEmoticonWrap:(id)a0 PlayGif:(BOOL)a1;
- (void)setupForSearch;
- (void)showRecommendIdentifyIfNeeded;
- (void)updateEmoticonView;
- (void)layoutSubviews;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
