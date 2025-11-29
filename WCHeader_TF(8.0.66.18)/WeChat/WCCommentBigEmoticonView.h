@class UIView, WCUserComment, SnsEmojiInfoObj, NSString, MMEmoticonView, WCCommentBigEmoticonViewModel, MMUIButton, MMUIActivityIndicatorView;
@protocol WCCommentBigEmoticonViewDelegate;

@interface WCCommentBigEmoticonView : MMUIView <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) MMUIButton *retryBtn;
@property (retain, nonatomic) WCCommentBigEmoticonViewModel *viewModel;
@property (nonatomic) double emoticonMaxSide;
@property (nonatomic) double emoticonMinSide;
@property (retain, nonatomic) WCUserComment *comment;
@property (weak, nonatomic) id<WCCommentBigEmoticonViewDelegate> delegate;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)defaultViewModel;
- (void)setup;
- (id)getEmoticonWrap;
- (struct CGSize { double x0; double x1; })getEmoticonSize;
- (void)setEmoticonSize:(struct CGSize { double x0; double x1; })a0;
- (void)setState:(unsigned long long)a0;
- (void)onClickRetryButton;
- (void)onClickEmoticonView;
- (void)onLongPressEmoticonView:(id)a0;
- (void)startDownloadEmoticon;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
