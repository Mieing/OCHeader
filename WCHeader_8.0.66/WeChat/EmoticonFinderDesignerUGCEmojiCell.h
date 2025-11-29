@class UILabel, NSString, UIImageView, UIView, MMWebImageView, EmojiInfoObj;

@interface EmoticonFinderDesignerUGCEmojiCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) MMWebImageView *emoticonView;
@property (retain, nonatomic) UIImageView *statusView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) UILabel *sendCountLabel;
@property (retain, nonatomic) UIView *sendView;
@property (nonatomic) BOOL needStaticsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithEmojiInfo:(id)a0;
- (void)startDownloadEmoji;
- (void)setHighlighted:(BOOL)a0;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
