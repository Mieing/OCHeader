@class NSString, AWETopicCommentCardView, AWEGeneralSearchModel;
@protocol AWEModernFeedCellContext, AWEModernFeedCellFrameProtocol;

@interface AWEGeneralTopicCommentCardViewController : UIViewController <AWESearchCachalotCardViewProtocol, AWESearchTopicCommentCardContext>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWETopicCommentCardView *cardView;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> bindedCellFrame;
@property (retain, nonatomic) AWEGeneralSearchModel *cardModel;
@property (nonatomic) double searchTextStartTime;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)trackShow;
- (id)btm;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)updateWithReferString:(id)a0;
- (id)bindedData;
- (void)reloadCurrentSectionAnimated:(BOOL)a0;
- (id)fetchSearchParams;
- (void)trackStay:(double)a0;
- (id)btmLog:(BOOL)a0;
- (id)customDataModelWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)componentView;
- (long long)sectionIndex;
- (void)updateWithViewModel:(id)a0;
- (void)updateContext:(id)a0;

@end
