@class AWESearchEventDispather, NSString, AWEGeneralSearchModel, AWEAwemeModel;
@protocol AWESearchComponentProtocol, AWESearchCommentCardContext;

@interface AWEGeneralCommentCardView : AWESearchContainerView <UIGestureRecognizerDelegate, AWESearchContainerCommentProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentUserComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentInfoComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> videoSourceComponent;
@property (weak, nonatomic) id<AWESearchCommentCardContext> cardContext;
@property (nonatomic) BOOL isWaitingChunkModel;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;

+ (struct CGSize { double x0; double x1; })containerSizeForModel:(id)a0 width:(double)a1;

- (void)updateWithReferString:(id)a0;
- (void)singleTapEnterAwemeDetailWithExtra:(id)a0;
- (void)p_createComponents;
- (void)updateWithChunkModel:(id)a0;
- (void)addObserverForChunkModel;
- (id)bindedData;
- (void)p_loadComponents;
- (void)removeObserverForChunkModel;
- (BOOL)enableConfigCommentCardRecommendSearch;
- (void)p_updateWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (long long)sectionIndex;
- (void)updateWithModel:(id)a0;
- (void)layoutComponents;

@end
