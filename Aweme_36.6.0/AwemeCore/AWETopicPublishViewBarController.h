@class NSString, AWEAwemeModel, AWESearchTopicPublishBottomView, NSObject, AWEUGCTopicInnerFlowContext;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWETopicPublishViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (retain, nonatomic) AWESearchTopicPublishBottomView *bottomView;
@property (retain, nonatomic) AWEUGCTopicInnerFlowContext *bottomBarSharedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)onBindContext;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
