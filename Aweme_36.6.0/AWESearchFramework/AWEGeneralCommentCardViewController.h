@class AWEGeneralCommentCardView, AWEGeneralSearchModel, NSString;
@protocol AWEModernFeedCellContext, AWEModernFeedCellFrameProtocol;

@interface AWEGeneralCommentCardViewController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWEGeneralCommentCardView *cardView;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> bindedCellFrame;
@property (retain, nonatomic) AWEGeneralSearchModel *cardModel;
@property (nonatomic) double searchTextStartTime;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;

- (void)trackShow;
- (void)updateWithReferString:(id)a0;
- (void)didStartShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)singleTapEnterAwemeDetailWithExtra:(id)a0;
- (id)bindedData;
- (void)registerCallback:(id /* block */)a0 forReachingPlaybackTime:(double)a1;
- (id)fetchSearchParams;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (id)transitionContext;
- (void)viewDidLoad;
- (long long)sectionIndex;
- (void)updateWithViewModel:(id)a0;

@end
