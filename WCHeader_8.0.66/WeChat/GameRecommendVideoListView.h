@class NSArray, NSString, UILabel, UIScrollView, NSMutableArray;
@protocol GameRecommendVideoListViewDelegate;

@interface GameRecommendVideoListView : UIView <UIScrollViewDelegate, GameVideoRecommendCardDelegate>

@property (copy, nonatomic) NSArray *recommendVideoList;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *tailLabel;
@property (retain, nonatomic) UIScrollView *recommendScrollView;
@property (retain, nonatomic) NSMutableArray *recommendCardsArray;
@property (retain, nonatomic) UILabel *titleView;
@property (weak, nonatomic) id<GameRecommendVideoListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)configRecommendList:(id)a0;
- (void)didPublishSelectAsset:(id)a0;
- (void)didSelectCardAssset:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)reportObjWithIndex:(long long)a0 videoId:(id)a1 action:(long long)a2;
- (void).cxx_destruct;

@end
