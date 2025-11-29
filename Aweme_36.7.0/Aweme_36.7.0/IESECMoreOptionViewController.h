@class NSArray, IESECMoreOptionView;

@interface IESECMoreOptionViewController : UIViewController

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL shouldShowOwnerClaim;
@property (nonatomic) BOOL shouldShowOwnerBackstage;
@property (retain, nonatomic) IESECMoreOptionView *moreOptionView;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL useParentFrameFirst;

- (void)showOnVC:(id)a0;
- (void)p_setupViews;
- (id)initWithItems:(id)a0 style:(unsigned long long)a1 useParentFrameFirst:(BOOL)a2;
- (void)showOnViewController:(id)a0 anchor:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (id)initWithItems:(id)a0 style:(unsigned long long)a1;

@end
