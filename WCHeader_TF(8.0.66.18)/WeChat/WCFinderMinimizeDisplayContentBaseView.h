@class NSString, MinimizeAudioTaskExtendCoverView, WCFinderFeedContentVM, MMWebImageView, UIImage;
@protocol WCFinderMinimizeContentViewDelegate;

@interface WCFinderMinimizeDisplayContentBaseView : UIView <WCFinderMinimizeContentViewProtocol>

@property (weak, nonatomic) id<WCFinderMinimizeContentViewDelegate> delegate;
@property (retain, nonatomic) MinimizeAudioTaskExtendCoverView *coverView;
@property (retain, nonatomic) MMWebImageView *fullCoverView;
@property (retain, nonatomic) NSString *controlCenterDisplayTitle;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UIImage *tmpSnapCoverImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)needFullCover;
- (void)updateContentVM:(id)a0;
- (void)ensureDisplayCover;
- (void)ensureFullDisplayCover;
- (BOOL)showBottomBlur;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)cleanUp;
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (double)playPosition;
- (void)beforeRestore;
- (void)keepHandlePlayer;
- (void)onMinimizeFloatingViewDidDisplay;
- (void).cxx_destruct;

@end
