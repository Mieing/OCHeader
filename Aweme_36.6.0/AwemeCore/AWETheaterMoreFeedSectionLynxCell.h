@class AWETheaterPageContext, NSString, AWETheaterMoreFeedSectionItem, UIView;
@protocol HunterContainerProtocol, BDXContianerBuilderProtocol;

@interface AWETheaterMoreFeedSectionLynxCell : UICollectionViewCell <HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (retain, nonatomic) id<BDXContianerBuilderProtocol> containerBuilder;
@property (retain, nonatomic) UIView *placeholderView;
@property (copy, nonatomic) id /* block */ sizeChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)loadFailedWithURL:(id)a0 error:(id)a1;
- (id)globalPropsForInitialize;
- (void)updateGlobalProps;
- (void)configWithSectionItem:(id)a0 context:(id)a1;
- (void)showPlaceholderView;
- (void)dismissPlaceholderView;
- (void)loadLynxCard;
- (id)globalPropsWithURLString:(id)a0 sectionItem:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
