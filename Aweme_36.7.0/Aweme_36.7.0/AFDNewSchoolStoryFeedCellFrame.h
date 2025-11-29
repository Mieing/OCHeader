@class AFDNewSchoolStoryFeedCellFrameAction, NSString, AWEConcernCardModel, AFDNewSchoolStoryFeedCellFrameTag, AFDNewSchoolStoryFeedCellFrameAuthor, AFDNewSchoolStoryFeedCellFrameMedia, AFDNewSchoolStoryFeedCellFrameContent;

@interface AFDNewSchoolStoryFeedCellFrame : NSObject <AWEModernFeedCellFrameProtocol>

@property (nonatomic) double containerWidth;
@property (nonatomic) double authorInfoContainerTop;
@property (nonatomic) BOOL hideSeparator;
@property (retain, nonatomic) AWEConcernCardModel *concernCardModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) long long timePostion;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameMedia *mediaFrame;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameContent *contentDescFrame;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameTag *tagFrame;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameAction *actionPanelFrame;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameAuthor *authorInfoFrame;
@property (nonatomic) BOOL showAuthorInfo;
@property (copy, nonatomic) NSString *displayPublishTime;
@property (copy, nonatomic) NSString *displayThirdAppName;
@property (nonatomic) double cellHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adLearnMoreViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adLabelViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adLearnMoreECommerceLynxButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adECommerceTitleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } goodsLynxViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFooterLynxViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } musicInfoBottomViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoSectionFrame;
@property (nonatomic) unsigned long long authorInfoLayoutType;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) long long cutType;
@property (nonatomic) BOOL shouldShowTimeLabelInAuthorInfo;
@property (nonatomic) BOOL isShowAdLearnMoreViewFailed;
@property (nonatomic) BOOL isContentToRed;
@property (nonatomic) BOOL isAuthorToRed;
@property (nonatomic) BOOL isRepostDetailVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)videoContainerViewLayoutWithReferString:(id)a0 isRepostDetail:(BOOL)a1;
+ (long long)cutTypeWithReferString:(id)a0 isRepostDetailVC:(BOOL)a1;
+ (unsigned long long)displayTypeWithReferString:(id)a0 isRepostDetailVC:(BOOL)a1;
+ (BOOL)shouldShowTimeInAuthorViewWithReferString:(id)a0 isRepostDetail:(BOOL)a1;
+ (unsigned long long)authorInfoViewLayoutTypeWithReferString:(id)a0 isRepostDetail:(BOOL)a1;
+ (long long)timePositionWithReferString:(id)a0 isRepostDetail:(BOOL)a1;
+ (BOOL)isAdaptedWithBrowsedType:(unsigned long long)a0;

- (id)displayTimeStringForTimeStamp:(double)a0;
- (id)realAweme;
- (id)cellIsRed;
- (BOOL)isXiGuaVideoCard;
- (BOOL)isStayingAtHomePageWithAweme:(id)a0;
- (void)updateTimeStringIfNeeded;
- (void)configCellFrameWithConcernCardModel:(id)a0 containerWidth:(double)a1;
- (void)configCellFrameWithConcernCardModel:(id)a0 containerWidth:(double)a1 showAuthorInfo:(BOOL)a2 isRepostDetailVC:(BOOL)a3;
- (void)configCellFrameWithConcernCardModel:(id)a0 containerWidth:(double)a1 showAuthorInfo:(BOOL)a2;
- (unsigned long long)videoContainerViewLayout;
- (BOOL)shouldShowMusicInfoBottomView;
- (void)reconfigCellFrame;
- (BOOL)allowShareXiGuaVideo;
- (void)configCellAuthorInfoFrame;
- (BOOL)isVideoAweme;
- (BOOL)hasVideoAbstract:(id)a0;
- (double)getContainerWidth;
- (void).cxx_destruct;
- (id)init;

@end
