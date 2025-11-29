@class MMFinderLiveDropGiftViewModel, NSString, PAGView, PAGFile, UIImageView, UIView, UILabel;
@protocol MMFinderLiveDropGiftViewDelegate;

@interface MMFinderLiveDropGiftView : UIView <PAGViewListener, MMFinderLiveDropGiftViewModelDelegate>

@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) PAGFile *pagFile;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMFinderLiveDropGiftViewModel *viewModel;
@property (weak, nonatomic) id<MMFinderLiveDropGiftViewDelegate> delegate;
@property (nonatomic, getter=isRepeated) BOOL repeated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateViewModel:(id)a0;
- (void)play;
- (void)stop;
- (void)onClickView:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)onDropGiftViewDisplayStatusChange:(id)a0 needShow:(BOOL)a1;
- (void).cxx_destruct;

@end
