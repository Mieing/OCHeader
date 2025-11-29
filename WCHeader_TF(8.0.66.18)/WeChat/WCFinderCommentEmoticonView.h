@class WCFinderAnimationLoadingView, NSString, MMEmoticonView, NSValue, UIView, WCFinderComment, MMUIButton;
@protocol WCFinderCommentEmoticonViewDelegate;

@interface WCFinderCommentEmoticonView : MMUIView <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingTipsView;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) MMUIButton *retryBtn;
@property (nonatomic) unsigned long long startDownloadImgBeginTimeMs;
@property (retain, nonatomic) NSValue *emotionDisplaySize;
@property (nonatomic) BOOL autoPlay;
@property (weak, nonatomic) id<WCFinderCommentEmoticonViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithFinderEmoticonComment:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })updateWithFinderEmoticonComment:(id)a0;
- (void)setEmoticonSize:(struct CGSize { double x0; double x1; })a0;
- (void)setState:(unsigned long long)a0;
- (id)getFeedId;
- (void)onClickRetryButton;
- (void)onClickEmoticonView;
- (void)onLongPressEmoticonView:(id)a0;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
