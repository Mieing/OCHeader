@class NSArray, NSString;
@protocol AWEModernFeedCellContext;

@interface AWESearchLynxListContainerComponentWrapper : SearchListContainerComponentWrapper <AWESearchLynxContainerDataSourceProtocol>

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)liveTransitionContext;
- (void)resetLivePlayer;
- (id)findSearchElement;
- (id)dyLynxElementView;
- (void).cxx_destruct;
- (id)transitionContext;
- (id)livePlayer;

@end
