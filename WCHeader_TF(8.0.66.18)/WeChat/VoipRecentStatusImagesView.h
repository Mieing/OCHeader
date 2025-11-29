@class NSString, UIImageView, NSTimer, UIScrollView, VoipRecentStatusFadeView;

@interface VoipRecentStatusImagesView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) VoipRecentStatusFadeView *topFadeView;
@property (retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView;
@property (copy, nonatomic) id /* block */ loadedAction;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) id /* block */ didSlideCallback;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCount:(unsigned long long)a0;
- (void)terminateTimer;
- (void)startUpTimer;
- (void)layoutSubviews;
- (void)scrollAutomatically;
- (void)refreshContents;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;

@end
