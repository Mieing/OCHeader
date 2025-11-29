@class NSString, AWEDCFeedPageContext, UIView, UIViewController;

@interface AWEUserProfileDCFeedEnterService : NSObject <AWEZoomTransitionOuterContextProvider, AFDFullPageFeedContainerViewControllerDelegate, AWEUserProfileDCFeedEnterServiceProtocol>

@property (retain, nonatomic) UIView *transitionStartView;
@property (weak, nonatomic) UIViewController *container;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedEnterImageAlbumOrAIOriginalPageForAweme:(id)a0 isCurrentUser:(BOOL)a1 TabName:(id)a2;
+ (BOOL)enableEnterAlbumDetailPage:(id)a0;
+ (BOOL)enableEnterAIOriginalPage:(id)a0;
+ (Class)aAWEPadFullPageFeedAdapterClass;
+ (BOOL)enableUpdatePadTransition;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)userProfileEnableAdjustEnterFeedDetail;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)tidyAwemeConfig;
- (void)enterDetailPageOfAlbumOrAIOriginalAtIndexPath:(id)a0 model:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (void)updateTransitionContextWithModel:(id)a0 startView:(id)a1 toContextProvider:(id)a2;
- (void)enterAlbumDetailAtIndexPath:(id)a0 withTidyModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (id)albumDetailDefaultPayloadWithModel:(id)a0 selectedCell:(id)a1 referString:(id)a2;
- (id)aAWEPadFullPageFeedAdapter;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)enterAlbumDetailAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (void)enterAIOriginAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3 logExtraDict:(id)a4;
- (id)albumDetailEventList;
- (id)tidyAlbumDetailEventList;
- (id)aiOriginalEventList;
- (void).cxx_destruct;
- (id)navigationController;

@end
