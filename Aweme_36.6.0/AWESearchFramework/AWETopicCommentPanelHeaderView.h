@class AWESearchEventDispather, NSString, AWEGeneralSearchModel, AWEAwemeModel;
@protocol AWESearchComponentProtocol;

@interface AWETopicCommentPanelHeaderView : AWESearchContainerView <UIGestureRecognizerDelegate, AWESearchContainerTopicCommentProtocol, AWESearchTopicCommentHeaderProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentUserComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentInfoComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> commentTimeComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (copy, nonatomic) id /* block */ commentTextHeightChangedBlock;

+ (struct CGSize { double x0; double x1; })containerSizeForModel:(id)a0 width:(double)a1;

- (void)commentInfoFullTextFold;
- (id)btm;
- (void)p_createComponents;
- (id)bindedData;
- (void)reloadCurrentSectionAnimated:(BOOL)a0;
- (void)p_loadComponents;
- (void)p_updateWithModel:(id)a0;
- (void)fullTextButtonRestore;
- (id)btmLog:(BOOL)a0;
- (void)openCommentPanel:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (long long)sectionIndex;
- (void)updateWithModel:(id)a0;
- (void)layoutComponents;

@end
