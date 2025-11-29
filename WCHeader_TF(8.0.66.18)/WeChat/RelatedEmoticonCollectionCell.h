@class WSEmoticonModel, NSString, MMEmoticonView, SightIconView, UILabel, MMWebImageView, CEmoticonWrap;

@interface RelatedEmoticonCollectionCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) MMWebImageView *thumbView;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *purchaseLabel;
@property (retain, nonatomic) SightIconView *sightIconView;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) BOOL needPurchase;
@property (retain, nonatomic) WSEmoticonModel *similarEmoticon;
@property (nonatomic) BOOL needPlayGif;
@property (nonatomic) BOOL needShowDesc;
@property (nonatomic) double padding;
@property (nonatomic) struct CGSize { double width; double height; } emoticonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateEmoticonView;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
