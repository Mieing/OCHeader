@class MMUIActivityIndicatorView, NSString, MMWebImageView, WSEmoticonModel;
@protocol WSSimilarEmotItemDelegate;

@interface WSSimilarEmotItemView : UIView <MMWebImageViewDelegate>

@property (weak, nonatomic) id<WSSimilarEmotItemDelegate> delegate;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) MMWebImageView *emoticonThumbView;
@property (retain, nonatomic) MMWebImageView *emoticonGifView;
@property (retain, nonatomic) WSEmoticonModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clickItem:(id)a0;
- (void)longPressItem:(id)a0;
- (void)updateImageData:(id)a0;
- (void)resizeGifFrame;
- (void)resizeThumbFrame;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoading;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
