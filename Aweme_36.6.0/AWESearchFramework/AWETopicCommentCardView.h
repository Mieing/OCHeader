@class UITapGestureRecognizer, NSString, AWESearchEventDispather, AWEGeneralSearchModel, AWEAwemeModel, UIViewController;
@protocol AWESearchTopicCommentCardContext, AWESearchComponentProtocol, AWECommentListViewControllerProtocol;

@interface AWETopicCommentCardView : AWESearchContainerView <UIGestureRecognizerDelegate, AWESearchContainerTopicCommentProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentUserComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentInfoComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> videoSourceComponent;
@property (weak, nonatomic) id<AWESearchTopicCommentCardContext> cardContext;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *currentCommentVC;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL isWaitingChunkModel;
@property (nonatomic) BOOL shouldFixTopicCommentBottomBarPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;

+ (struct CGSize { double x0; double x1; })containerSizeForModel:(id)a0 width:(double)a1;

- (void)addGesture;
- (id)btm;
- (void)p_handleContainerLongPress:(id)a0;
- (void)updateWithReferString:(id)a0;
- (void)p_createComponents;
- (void)updateWithChunkModel:(id)a0;
- (void)addObserverForChunkModel;
- (id)bindedData;
- (void)reloadCurrentSectionAnimated:(BOOL)a0;
- (void)p_loadComponents;
- (void)removeObserverForChunkModel;
- (void)p_updateWithModel:(id)a0;
- (void)fullTextButtonRestore;
- (id)btmLog:(BOOL)a0;
- (void)cardClicked;
- (void)openCommentPanel:(BOOL)a0;
- (void)openCommentPanelForHotSpot:(BOOL)a0;
- (void)openCommentPanelForTopic:(BOOL)a0;
- (id)commentObjectForLog:(id)a0;
- (void)trackClickCard;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (long long)sectionIndex;
- (void)updateWithModel:(id)a0;
- (void)layoutComponents;

@end
