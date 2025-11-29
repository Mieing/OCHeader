@class NSString, UICollectionView, NSMutableSet, NSMutableArray;

@interface AWEUserWorkReachCellExposeController : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visitFrame;
@property (nonatomic) BOOL markViewDidAppeared;
@property (retain, nonatomic) NSMutableSet *leftTopTrackSet;
@property (retain, nonatomic) NSMutableArray *showedReachArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) id /* block */ trackExtraParamsBlock;
@property (copy, nonatomic) id /* block */ convertRectToContainerViewBlock;
@property (copy, nonatomic) id /* block */ cellDidDisplayBlock;

+ (BOOL)enableCellShownTrackTimingOptimized;

- (void)scrollViewDidEndScroll:(id)a0;
- (id)initWithVisitFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionView:(id)a1;
- (id)leftTopExtraParamsForCoverTrack:(id)a0;
- (void)checkVisibleCellsShow;
- (void)didSelectedCellWithCell:(id)a0;
- (id)leftTopComponentTrackExtraParams:(id)a0;
- (id)leftTopTrackWith:(id)a0 awemeModel:(id)a1 order:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToContainerView:(id)a0;
- (void)viewDidAppear;
- (void)reloadData;
- (void).cxx_destruct;

@end
