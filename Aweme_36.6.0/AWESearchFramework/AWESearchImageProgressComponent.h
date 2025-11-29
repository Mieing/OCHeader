@class AWESearchEventDispather, NSString, NSDictionary, AWESearchImageProgressComponentModel, UIView, AWESearchAlbumProgressContainer, NSMutableArray;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchImageProgressComponent : AWESearchComponent <AWESearchImageProgressComponentProvider>

@property (retain, nonatomic) AWESearchImageProgressComponentModel *componentModel;
@property (retain, nonatomic) AWESearchAlbumProgressContainer *progressView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 currentDotFromCenter:(id)a4 needScrollAnimation:(BOOL)a5 needAnimation:(BOOL)a6;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (void)updateProgressUIWithConfig:(id)a0;
- (void).cxx_destruct;
- (long long)totalCount;
- (id)componentView;
- (void)setupUI;

@end
