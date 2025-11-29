@class NSArray, NSDictionary, NSString, AWENewsAISmartSubmitHelper, AWENewsAISmartFeedPageContext, NSMutableArray;

@interface AWENewsAISmartDislikePanelViewModel : NSObject

@property (copy, nonatomic) NSArray *collectionDataSource;
@property (copy, nonatomic) NSDictionary *panelParams;
@property (copy, nonatomic) NSString *trackID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *track;
@property (copy, nonatomic) NSString *toastString;
@property (retain, nonatomic) AWENewsAISmartSubmitHelper *submitHelper;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) double panelHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic) double itemHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewHeight;
@property (copy, nonatomic) NSString *mainTitleText;
@property (retain, nonatomic) AWENewsAISmartFeedPageContext *context;
@property (nonatomic) struct CGPoint { double x; double y; } touchLocation;
@property (retain, nonatomic) NSMutableArray *contentReason;
@property (retain, nonatomic) NSMutableArray *uninterestingReason;

- (id)getItemTitleForIndexPath:(id)a0;
- (id)getSectionTitle:(long long)a0;
- (double)cellWidthForIndexPath:(id)a0;
- (void)setupUIInfo;
- (void)trackDislikeShowWithDict:(id)a0;
- (void)submitDislikeReasonWithDict:(id)a0;
- (void)trackDislikeSubmitWithDict:(id)a0;
- (id)initWithPageContext:(id)a0 params:(id)a1;
- (id)p_dislikeSectionData;
- (id)p_feedbackSectionData;
- (id)p_createSubmitParamsDict;
- (id)p_createPanelParamsDict;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (void)setupDataSource;

@end
