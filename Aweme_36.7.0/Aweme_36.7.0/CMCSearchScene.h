@class CMCCallable;

@interface CMCSearchScene : CMCScene

@property (retain, nonatomic) CMCCallable *didClickAdContentDesc;
@property (retain, nonatomic) CMCCallable *didClickAdComponentsView;
@property (retain, nonatomic) CMCCallable *didClickLearnMoreView;
@property (retain, nonatomic) CMCCallable *trackAdPlayTime;
@property (retain, nonatomic) CMCCallable *trackPlayerWillLoopPlaying;
@property (retain, nonatomic) CMCCallable *trackAdPlayForLoop;
@property (retain, nonatomic) CMCCallable *didClickAdTag;
@property (retain, nonatomic) CMCCallable *didClickAdHashTag;
@property (retain, nonatomic) CMCCallable *trackAdShow;
@property (retain, nonatomic) CMCCallable *trackOriginAdInfo;
@property (retain, nonatomic) CMCCallable *didClickAdUserName;
@property (retain, nonatomic) CMCCallable *trackAdEndorseShow;
@property (retain, nonatomic) CMCCallable *trackAdSearchCardShow;
@property (retain, nonatomic) CMCCallable *openAppWithRefer;
@property (retain, nonatomic) CMCCallable *trackShowHotSpotEndorse;
@property (retain, nonatomic) CMCCallable *trackClickHotSpotEndorseTopic;
@property (retain, nonatomic) CMCCallable *trackClickHotSpotEndorseVideo;
@property (retain, nonatomic) CMCCallable *trackShowAggregationEcommerceAllCard;
@property (retain, nonatomic) CMCCallable *trackBreakAggregationEcommerceAllCard;
@property (retain, nonatomic) CMCCallable *trackClickAggregationEcommerceAllCard;
@property (retain, nonatomic) CMCCallable *trackPlayAggregationEcommerceLiveCard;
@property (retain, nonatomic) CMCCallable *trackOverAggregationEcommerceVideoCard;
@property (retain, nonatomic) CMCCallable *trackClickAggregationEcommercePictureCard;
@property (retain, nonatomic) CMCCallable *trackClickAggregationEcommerceVideoGoodsCard;
@property (retain, nonatomic) CMCCallable *trackClickAggregationEcommerceLiveGoodsCard;
@property (retain, nonatomic) CMCCallable *trackReceiveAdDataCardVideo;
@property (retain, nonatomic) CMCCallable *trackReceiveAdDataCardSearchAd;
@property (retain, nonatomic) CMCCallable *trackReceiveAdDataCardMerchandise;
@property (retain, nonatomic) CMCCallable *trackReceiveAdDataFullEgg;
@property (retain, nonatomic) CMCCallable *trackReceiveLynxCard;
@property (retain, nonatomic) CMCCallable *trackReceiveCommerceChallengeCard;
@property (retain, nonatomic) CMCCallable *trackReceiveCommerceChallengeFeedCard;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardReceive;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardDidStartShowing;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardPlayerLoadStateDidChange;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardAvatarClicked;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardUsernameClicked;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardLiveViewTapped;
@property (retain, nonatomic) CMCCallable *adLiveSearchCardDidEndShowing;
@property (retain, nonatomic) CMCCallable *adLiveSearchProductCardTapped;
@property (retain, nonatomic) CMCCallable *trackProductTabShow;
@property (retain, nonatomic) CMCCallable *trackProductTabOtherClick;
@property (retain, nonatomic) CMCCallable *trackProductTabShopLabel;
@property (retain, nonatomic) CMCCallable *productTabPictureAdTapped;
@property (retain, nonatomic) CMCCallable *productTabPictureAdTappedOnlyTracker;
@property (retain, nonatomic) CMCCallable *trackProductTabBreak;
@property (retain, nonatomic) CMCCallable *trackReceiveCommerceProductEndorse;
@property (retain, nonatomic) CMCCallable *trackAdEndorseUserCard;
@property (retain, nonatomic) CMCCallable *trackAdSearchLive;
@property (retain, nonatomic) CMCCallable *trackLiveLynxFail;
@property (retain, nonatomic) CMCCallable *trackTopUserView;
@property (retain, nonatomic) CMCCallable *startFetchAdModelInSearchMiddlePage;

- (void).cxx_destruct;
- (id)init;

@end
