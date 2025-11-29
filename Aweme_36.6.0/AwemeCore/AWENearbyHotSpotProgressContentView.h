@class NSMutableArray;

@interface AWENearbyHotSpotProgressContentView : UIView

@property (nonatomic) long long lastIndex;
@property (nonatomic) long long lastTotalCount;
@property (retain, nonatomic) NSMutableArray *dotsArray;
@property (retain, nonatomic) NSMutableArray *sevenStateArray;
@property (retain, nonatomic) NSMutableArray *fiveStateArray;
@property (retain, nonatomic) NSMutableArray *currentStateArray;

- (void)configureUI;
- (void)updateStateWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1 animated:(BOOL)a2;
- (void)updateFiveStateArrayWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1;
- (BOOL)shouldChangeStateArrayWithTotalPageCount:(long long)a0;
- (void)calculateHiddenStateOfEachDotWithCurrentIndex:(long long)a0 totalPageCount:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
