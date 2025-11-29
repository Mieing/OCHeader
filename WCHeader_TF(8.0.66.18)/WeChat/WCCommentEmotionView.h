@class MMUIActivityIndicatorView, UIImageView, NSString, MMUIButton, SnsEmojiInfoObj;
@protocol WCCommentEmotionViewDelegate;

@interface WCCommentEmotionView : UIView <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) UIImageView *emoctionView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) MMUIButton *failRetryBtn;
@property (nonatomic) double maxLength;
@property (nonatomic) double minLength;
@property (nonatomic) BOOL isStatic;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (weak, nonatomic) id<WCCommentEmotionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })getEmojiSize:(id)a0 maxLength:(double)a1;
+ (struct CGSize { double x0; double x1; })getEmoctionViewShowSize:(struct CGSize { double x0; double x1; })a0 maxLength:(double)a1;
+ (double)getEmoctionScaleFor:(double)a0 maxLength:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addEmoctionView;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)showDownloadFailView;
- (void)hideDownloadFailView;
- (void)onRetryDownLoad;
- (void)showEmotionWithData:(id)a0 md5:(id)a1;
- (void)startDownloadEmoticon;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
