@class UIView, NSString, UIImageView, CEmoticonWrap, YYAsyncImageView, MMEmoticonView, UILabel, MMUIActivityIndicatorView;

@interface EmoticonBoradCrossCollectionRecommendAndAICell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) UIImageView *retrySmileImageView;
@property (retain, nonatomic) UILabel *retryTipLabel;
@property (retain, nonatomic) YYAsyncImageView *emoticonThumbView;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL needPlayGif;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateEmojiDataView:(id)a0;
- (void)playGif:(BOOL)a0;
- (void)updateEmoticonView:(BOOL)a0;
- (void)showEmoticonView;
- (void)showLoadingView;
- (void)showRetryView;
- (void)handleRetryTap;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
