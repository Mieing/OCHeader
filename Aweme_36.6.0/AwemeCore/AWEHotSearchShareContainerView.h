@class CADisplayLink, NSString, UIImageView, AWEHotSearchShareContainerViewModel, UIScrollView, UIView, UIImage;
@protocol HunterContainerProtocol, AWEHotSearchShareContainerViewDelegate;

@interface AWEHotSearchShareContainerView : UIView <HunterContainerLifeCycleProtocol, UIScrollViewDelegate, AWEHotSearchShareContainerViewProtocol>

@property (retain, nonatomic) AWEHotSearchShareContainerViewModel *viewModel;
@property (retain, nonatomic) UIScrollView *scrollContainerView;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (retain, nonatomic) UIView *targetSnapView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *snapImage;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHotSearchShareContainerViewDelegate> delegate;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)resetDisplayLink;
- (void)dismissSharePanel;
- (void)bindEvent;
- (id)initWithHotSearchModel:(id)a0 shouldWeakRef:(BOOL)a1;
- (void)configureViewModelWithHotSearchModel:(id)a0 shouldWeakRef:(BOOL)a1;
- (void)tryShowShareImage;
- (void)tryLoadData;
- (void)hotSearchShareContentLoadFinish;
- (void)shareFailedWithErrorType:(long long)a0;
- (void)updateContainerLayoutAfterSnapWithImage:(id)a0;
- (void)snapImageWithCompletion:(id /* block */)a0;
- (void)containerViewForceLayout;
- (void)adjustScrollViewContentOffsetIfNeeded:(id)a0;
- (double)bottomMaxOffset;
- (id)imageToSaveToAlbum;
- (void)updateStateAfterClickIcon;
- (double)topPadding;
- (double)bottomPadding;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)cornerRadius;
- (double)currentTime;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)setupUI;

@end
