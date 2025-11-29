@class UITableViewCell, NSString, UIView, IESLiveRoomMQEventReportApi, AWELivePreCardViewModel, AWEAwemeModel, NSDictionary, UILabel;
@protocol AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, IESLiveDI, AWEFeedTableViewCellControllerPlayerDelegate, AWEFeedTableViewCellProtocol;

@interface AWELivePreCardViewController : UIViewController <AWEFeedTableViewCellViewControllerProtocol>

@property (retain, nonatomic) id<IESLiveDI> roomDI;
@property (copy, nonatomic) NSString *leaveAction;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWELivePreCardViewModel *cardViewModel;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) IESLiveRoomMQEventReportApi *reportApi;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (weak, nonatomic) id<AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long type;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *superCell;
@property (copy, nonatomic) NSDictionary *extTrackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)cardHeight;
- (id)currentUserId;
- (id)commonTrackContext;
- (BOOL)isFollow;
- (BOOL)isFromHomepageFamiliar;
- (BOOL)isUserLinkMicRoom;
- (void)iesLiveTrackEvent:(id)a0 params:(id)a1;
- (void)coverDidClick;
- (void)p_trackLiveShow;
- (void)trackGemIcon:(id)a0 type:(id)a1;
- (id)tagInfoForTrack;
- (id)p_checkParams:(id)a0 withParamsList:(id)a1;
- (id)p_extraTrackParamsForAggregateModels;
- (id)inviteModeForTrackByBattleSettings:(id)a0;
- (void)trackLiveCoverShow:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)configureWithModel:(id)a0;
- (double)cardWidth;

@end
