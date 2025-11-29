@class NSString, AWENearbyDislikeGuideView, AWENearbyDislikeView, AWEAwemeModel;

@interface AWENearbyDislikeViewController : UIViewController

@property (retain, nonatomic) AWENearbyDislikeView *view;
@property (weak, nonatomic) AWENearbyDislikeGuideView *dislikeGuideView;
@property (readonly, copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ dislikeBlock;

- (void)showInView:(id)a0 animated:(BOOL)a1;
- (id)initWithReferString:(id)a0;
- (void)dismissDislikeGuideView;
- (void)showDislikeGuideViewWithModel:(id)a0 inView:(id)a1;
- (void)p_dislike;
- (void).cxx_destruct;
- (void)loadView;
- (void)dismiss:(BOOL)a0;

@end
