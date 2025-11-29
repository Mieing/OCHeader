@class NSString, AWEBaseElement, LOTAnimationView, UIImageView, UIScrollView, UILabel, UITableView;

@interface AWEOlderInteractiveGuideViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LOTAnimationView *guideLOTView;
@property (retain, nonatomic) UIImageView *highLightImgView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) AWEBaseElement *baseElement;
@property (nonatomic) struct CGPoint { double x; double y; } originOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__configSubviews;
- (void)updateTipsLabel:(id)a0;
- (void)showCommentGuideWithInteractionVC:(id)a0 onTableView:(id)a1;
- (void)showAvatarGuideWithInteractionVC:(id)a0 onTableView:(id)a1;
- (void)__configTabview:(id)a0;
- (id)__createImageWithView:(id)a0;
- (void)__configGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offsetLOTY:(long long)a1;
- (void)__handleUserClickBackground;
- (void)__handleAutoDismissGuideView;
- (void)__releaseGuideView;
- (void)__trackOlderGuideClickWithType:(id)a0 isHighlight:(long long)a1 action:(id)a2;
- (void)__handleClickHighLightArea:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
