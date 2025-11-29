@class NSMutableArray;

@interface AWELivePreCardScrollAnimationView : UIView

@property (retain, nonatomic) NSMutableArray *scrollLines;
@property (nonatomic) long long maxCount;

- (void)reloadWith:(long long)a0;
- (void)removeAnimation;
- (void).cxx_destruct;
- (void)play;
- (id)initWithMaxCount:(long long)a0;
- (void)setupUI;

@end
