@class UIView;

@interface AWELeftEmptyView : AWEPlayInteractionLeftElement

@property (retain, nonatomic) UIView *emptyView;

+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)appear;

@end
