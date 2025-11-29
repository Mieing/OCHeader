@class AWESearchCachalotResultContext, NSString, AWESearchLiveAppointmentUserInfoView, AWESearchLiveAppointmentLiveListView, AWELiveSearchModel;
@protocol AWEModernFeedCellContext;

@interface AWESearchLiveAppointmentCellController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchLiveAppointmentUserInfoView *userInfoView;
@property (retain, nonatomic) AWESearchLiveAppointmentLiveListView *liveListView;
@property (retain, nonatomic) AWELiveSearchModel *liveSearchModel;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (readonly, nonatomic) BOOL fixSearchId;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun_54;

- (void)trackSearchResultShow;
- (void)updateUIAfterModelUpdate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithContext:(id)a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
