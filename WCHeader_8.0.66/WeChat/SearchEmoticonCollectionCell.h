@class EmoticonRecommendWrap, NSString, MMEmoticonView, SightIconView, UILabel, MMWebImageView, CEmoticonWrap;

@interface SearchEmoticonCollectionCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) MMWebImageView *thumbView;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *purchaseLabel;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL needPurchase;
@property (retain, nonatomic) EmoticonRecommendWrap *recommendWrap;
@property (nonatomic) BOOL needPlayGif;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateEmojiDataView:(id)a0 isLocal:(BOOL)a1;
- (void)updateEmoticonView;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
