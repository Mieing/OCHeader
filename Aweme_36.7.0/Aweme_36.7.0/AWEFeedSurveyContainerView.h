@class NSString, NSMutableSet, UIView, AWEAwemeModel;
@protocol AWESurveyContainerViewDelegate, HunterContainerProtocol;

@interface AWEFeedSurveyContainerView : UIView <HunterContainerLifeCycleProtocol, AWESurveyContainerViewProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (retain, nonatomic) NSMutableSet *registeredEvents;
@property (nonatomic) BOOL hasLoadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESurveyContainerViewDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) long long index;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidReuse:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)preloadSurveyWithQuestionnaire:(id)a0 extraInfo:(id)a1;
- (void)registerEvent:(id)a0 callBack:(id /* block */)a1;
- (void)dismissSurvey;
- (void)unregisterAllEvent;
- (void)addTapGesture;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterEvent:(id)a0;
- (void)dealloc;
- (void)setupUI;
- (void)handleTapGesture:(id)a0;

@end
