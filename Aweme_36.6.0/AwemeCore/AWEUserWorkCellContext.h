@class AWEAwemeModel, NSString, AWEUserWorkComponentUIAdapterConfig, AWEUserWorkCellComponentConfig, UIImage, AWEProfileEventCenter, AWEBinding, AWEProfileServiceCenter, NSNumber;

@interface AWEUserWorkCellContext : AWEPageContext

@property (weak, nonatomic) AWEAwemeModel *data;
@property (copy, nonatomic) NSString *imageName;
@property (weak, nonatomic) AWEUserWorkCellComponentConfig *componentConfig;
@property (retain, nonatomic) AWEProfileServiceCenter *cellServiceCenter;
@property (retain, nonatomic) AWEProfileEventCenter *cellEventCenter;
@property (copy, nonatomic) id /* block */ blIconBlock;
@property (copy, nonatomic) NSString *blProhibitedText;
@property (copy, nonatomic) NSString *blCountLableText;
@property (nonatomic) BOOL needShowLBStarAtlasTagLabel;
@property (nonatomic) BOOL needShowReviewResultText;
@property (nonatomic) BOOL needShowFlameInComeLabel;
@property (copy, nonatomic) NSString *bCountLableText;
@property (retain, nonatomic) AWEBinding *diggCountBinding;
@property (retain, nonatomic) AWEBinding *playCountBinding;
@property (retain, nonatomic) AWEBinding *descriptionStringBinding;
@property (retain, nonatomic) AWEBinding *coverTopLeftCornerModelBinding;
@property (nonatomic) BOOL forceHideRightTopCornerContainer;
@property (nonatomic) BOOL forceHideRightBottomCornerContainer;
@property (retain, nonatomic) AWEUserWorkComponentUIAdapterConfig *uiAdapterConfig;
@property (readonly, nonatomic) double padding;
@property (readonly, nonatomic) double iconViewWidth;
@property (readonly, nonatomic) double countLabelHeight;
@property (copy, nonatomic) id /* block */ onDiggedBlock;
@property (copy, nonatomic) id /* block */ indexPathBlock;
@property (copy, nonatomic) id /* block */ loadCoverCompleted;
@property (nonatomic) BOOL usingDynamicCover;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (copy, nonatomic) NSString *tagLabelString;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *firstAccessibilityLabel;
@property (copy, nonatomic) NSString *afterAccessibilityLabel;
@property (nonatomic) long long showDouGuideTagStauts;
@property (retain, nonatomic) UIImage *privacyIconImage;
@property (nonatomic) BOOL forceShowUnreadLabel;
@property (copy, nonatomic) id /* block */ chooseButtonClickCallback;
@property (retain, nonatomic) NSNumber *chooseNumber;

+ (void)aweToggleDiggWithModel:(id)a0;
+ (Class)aAWEUserProfileModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (Class)aAWEProfileCollectionTabUIDOUYINJXAdapterClass;

- (void)partOfVisibleStatusChangedWith:(id)a0;
- (BOOL)shouldShowStoryTag;
- (BOOL)shouldShowLongVideoTag;
- (id)aAWEUserProfileModuleServiceDOUYINHTSAdaper;
- (id)aAWEPostWorkViewControllerAdapter;
- (BOOL)shouldShowSharePostTag;
- (BOOL)__shouldShowPrivacyIconInMyHomepageWithData:(id)a0;
- (void)__updateAccessibilityLabelAndLeftBottomContent:(id)a0;
- (BOOL)forceCloseTimingPush;
- (id)reviewResultFrom:(id)a0;
- (BOOL)__douGuideTagOnItem:(id)a0;
- (void)updateFourCornersHiddenState;
- (void)updateUIAdapterConfig;
- (id)aAWEProfileCollectionTabUIDOUYINJXAdapter;
- (BOOL)__isSchedulePostAwemeModelAndInExperiment:(id)a0;
- (id)__likeImageName;
- (id)__getProhibitedText:(id)a0;
- (void)__updateAccessibilityLabelWithData:(id)a0 title:(id)a1 prohibitedText:(id)a2;
- (id)__videoImageName;
- (id)__leftBottomIconImage:(id)a0;
- (id)iconCacheDict;
- (void)updateContentWith:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWith:(id)a0;
- (BOOL)isCurrentUser;

@end
