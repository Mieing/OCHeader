@class AWEPOILiveDetailViewController, AWEPOILiveLocationManagerEmtpyView, NSString, AWEPOILiveRoomModel, UILabel, UIView, UIButton;

@interface AWEPOILiveLocationManagerViewController : UIViewController <AWEPOILiveDetailViewControllerDelegate>

@property (nonatomic) unsigned long long role;
@property (retain, nonatomic) AWEPOILiveRoomModel *room;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *manageButton;
@property (retain, nonatomic) AWEPOILiveLocationManagerEmtpyView *emptyView;
@property (retain, nonatomic) AWEPOILiveDetailViewController *detailViewController;
@property (readonly, nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ willHideBlock;
@property (copy, nonatomic) id /* block */ poiIDChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)poiID;
- (void)loadUI;
- (id)initWithScene:(unsigned long long)a0 liveRoom:(id)a1;
- (void)poiLiveDetailContentInfoDidFetched:(id)a0 haveService:(BOOL)a1;
- (void)requestRoomBindPOI:(id)a0 completionBlock:(id /* block */)a1;
- (void)tapOnView:(id)a0;
- (void)p_addEmptyViewWithContentHeight:(double)a0;
- (void)p_addPOIContentFrameWithContentHeight:(double)a0;
- (void)commitRoom:(id)a0 poiID:(id)a1 update:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)manageButtonDidPressed:(id)a0;
- (void)addLocationDidPressed:(id)a0;
- (void)p_showAddLocationVC;
- (void)updateLocation:(id)a0 poiName:(id)a1;
- (void)switchToNewLocation;
- (void)removeCurrentLocation;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
