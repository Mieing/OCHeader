@class NSString, LLDitoNestedScrollExtension, NSMutableDictionary, LLDitoPageContext, NSMutableSet, NSMutableArray, NSNumber, LLDitoStickyContainer;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoStickyManager : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoNestedScrollExtension *nestedScrollExtension;
@property (retain, nonatomic) LLDitoStickyContainer *stickyContainer;
@property (retain, nonatomic) NSMutableSet *nodeTagsToBeStickedSet;
@property (retain, nonatomic) NSMutableArray *nodesToBeStickedArray;
@property (retain, nonatomic) NSMutableArray *stickedNodesArray;
@property (retain, nonatomic) NSMutableSet *observingViews;
@property (retain, nonatomic) NSMutableDictionary *tagToViewMap;
@property (retain, nonatomic) NSMutableDictionary *tagToSubViewMap;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL stickyContainerNeedShadow;
@property (nonatomic) BOOL isSetStickyStatusByReload;
@property (retain, nonatomic) NSNumber *isEnableStickSubViewVariableHeight;
@property (nonatomic) BOOL lastScrollDirection;
@property (nonatomic) BOOL containerIsLoadingMore;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastStickySubViewFrame;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useDeprecated;
- (void)pageDidScroll:(id)a0;
- (void)didEndParseLoadMoreData:(id)a0 error:(id)a1;
- (void)didEndReload;
- (id /* block */)customDismissWithAnimationBlock;
- (void)initializeExtension;
- (id)stickyContainerView;
- (double)stickyRemainContentHeight;
- (BOOL)enableStickSubViewVariableHeight;
- (double)preCalculateStickyContainerHeight:(long long)a0;
- (double)getBodyPatchYOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bodyIntersectHeaderFrame;
- (id)stickedBizViewForTag:(id)a0;
- (void)stickyTop:(id)a0;
- (id)stickedSubViewForTag:(id)a0;
- (id)getStickyContainerView:(id)a0;
- (id)createSubViewStickyTop:(id)a0 parentView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickContainerRemainFrame;
- (void)setupStickySubView:(id)a0 componentView:(id)a1 withModel:(id)a2;
- (void)setupStickyComponentView:(id)a0 withModel:(id)a1;
- (void)setShadowForStickyContainer:(BOOL)a0;
- (double)getStickSubViewTopMargin:(id)a0;
- (id)stickyContainerBackgroundColor:(id)a0;
- (void)updateStickySubViewHeight:(id)a0 withModel:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getStickUntilComponentFrameConcernMargin:(id)a0;
- (void)unstickyTop:(id)a0;
- (void)deprecated_didEndReload;
- (void)deprecated_didEndParseLoadMoreData:(id)a0 error:(id)a1;
- (void)deprecated_pageDidScroll:(id)a0;
- (BOOL)isAEqual:(double)a0 toB:(double)a1;
- (double)deprecated_preCalculateStickyContainerHeight:(long long)a0;
- (double)deprecated_stickyRemainContentHeight;
- (void)p_unstickLast;
- (BOOL)needStickNewModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)didLayout;
- (void)dealloc;

@end
