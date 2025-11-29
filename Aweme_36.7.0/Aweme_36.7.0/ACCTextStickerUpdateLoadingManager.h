@class UIView;
@protocol ACCTextLoadingViewProtcol;

@interface ACCTextStickerUpdateLoadingManager : NSObject

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (nonatomic) BOOL hasCancelled;

- (void)dismissLoadingView;
- (void)showLoadingViewWithLoadingConfig:(id)a0;
- (void).cxx_destruct;

@end
