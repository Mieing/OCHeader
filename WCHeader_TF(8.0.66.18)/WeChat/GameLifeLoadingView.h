@class NSString, UIImageView, MMUILabel;
@protocol GameLifeLoadingViewDelegate;

@interface GameLifeLoadingView : MMUIView <GCLoadingViewProtocol> {
    UIImageView *_loadingImageView;
    MMUILabel *_loadingTextLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GameLifeLoadingViewDelegate> delegate;

- (void)gcBeginLoading;
- (void)gcEndLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)beginLoadingAnimation;
- (void)endLoadingAnimation;
- (void)layoutSubviews;
- (void)relayout;
- (void)startLoading;
- (void)onLoadingError;
- (void)handleRetryTap:(id)a0;
- (void).cxx_destruct;

@end
