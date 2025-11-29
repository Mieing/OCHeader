@class AWESearchDetailEntryContext, UIView;

@interface AWEAwemeDetailNaviBarBaseSearchElement : AWEAwemeDetailNaviBarBaseElement

@property (nonatomic) BOOL hasAppearInnerRelateGuide;
@property (retain, nonatomic) AWESearchDetailEntryContext *searchEntryContext;
@property (nonatomic) BOOL hasUpdatedContext;
@property (retain, nonatomic) UIView *discoverEntranceView;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)awemeModel;
- (void)jumpSearchToResult:(BOOL)a0;
- (void)onDiscoverButtonClicked:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)jumpSearchToResult:(BOOL)a0 ges:(id)a1;
- (void)newJumpSearchToResult:(BOOL)a0 ges:(id)a1;
- (void)gestureTapBeganWithGes:(id)a0 toResult:(BOOL)a1;
- (void)gestureTapCancelWithGes:(id)a0 toResult:(BOOL)a1;
- (void)gestureTapEndWithGes:(id)a0 toResult:(BOOL)a1 needPerfOpt:(BOOL)a2;
- (BOOL)showInnerRelatedRecommodGuide;
- (void)showSearchUserGuide;
- (void)firstUpdateContext:(id)a0 toResult:(BOOL)a1;
- (void)updateContextForGesEnd;
- (void)jumpPhotoSearch;
- (double)searchEntranceHeight;
- (void)viewDidAppearForGuide;
- (void)jumpSearchToResultForPublic:(BOOL)a0;
- (void).cxx_destruct;

@end
