@class AWEPOIFavoriteBubble, AWEPOIInfoModel, AWEPOIServiceButtonModel, AWEPOIBizModel, UILabel, NSDictionary, UIButton, UIView, AWEPOICollectObject, NSString, AWEPOIDetailStore, AWEAwemeModel, AWEPOISimpleCollectView, AWEPOIEmphraseNearbyHotRankView, UIImageView;

@interface AWEPOIEmphraseCollectAnchorViewController : UIViewController <AWEPOIEmphraseCollectAnchorViewControllerProtocol>

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (retain, nonatomic) AWEPOIBizModel *poiBiz;
@property (retain, nonatomic) AWEPOIServiceButtonModel *serviceButtonInfo;
@property (weak, nonatomic) AWEPOIDetailStore *store;
@property (retain, nonatomic) AWEPOICollectObject *collectObject;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UIView *anchorContainerView;
@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIImageView *coordinateImageView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *vSeparator;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEPOIFavoriteBubble *favoriteBubble;
@property (retain, nonatomic) AWEPOISimpleCollectView *simpleCollectView;
@property (retain, nonatomic) AWEPOIEmphraseNearbyHotRankView *nearbyHotRankView;
@property (retain, nonatomic) UIButton *serviceButton;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWEPOIInfoModel *additionalPOIInfo;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWithAweme:(id)a0 animated:(BOOL)a1;
- (void)setExtraLogDic:(id)a0;
- (void)handleOuterFavoriteActionNotification:(id)a0;
- (id)initWithRxModule:(id)a0 anchorStyle:(unsigned long long)a1;
- (void)didTapOnView;
- (void)serviceButtonDidTapped;
- (void)p_updateFavoriteBubbleHidden:(BOOL)a0;
- (void)p_reloadDataWithPoiInfo:(id)a0 poiBiz:(id)a1 coverUrl:(id)a2 animated:(BOOL)a3;
- (id)enterFromValue;
- (id)clickBubbleRouterSchema;
- (void)p_updateUIWithCoverUrl:(id)a0 isPoiInfoIDSame:(BOOL)a1;
- (id)tryFetchPOIGroupOnConfigForSessionParams;
- (void)collectAction;
- (id)tryFetchFeedTrackConfig;
- (id)tryFetchFeedTrackConfigExtraParams;
- (id)tryFetchPOIDetailConfig;
- (id)tryFetchPOIGroupOnConfig;
- (void)openNearbyHotRankPOI;
- (id)tryFetchPOIDetailConfigForEnterPOIDetail;
- (id)tryFetchPOIDetailConfigForSession;
- (void)openNearbyHotRank;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)bubbleText;

@end
