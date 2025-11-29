@class CMCCommentScene, CMCCallable;

@interface CMCAwemeScene : CMCScene

@property (retain, nonatomic) CMCCommentScene *comment;
@property (retain, nonatomic) CMCCallable *didClickButton;
@property (retain, nonatomic) CMCCallable *didClickRedPacket;
@property (retain, nonatomic) CMCCallable *didClickAttractionView;
@property (retain, nonatomic) CMCCallable *didClickStartAtlasLink;
@property (retain, nonatomic) CMCCallable *didClickMissionLink;
@property (retain, nonatomic) CMCCallable *didClickAdLink;
@property (retain, nonatomic) CMCCallable *didClickIronManLink;
@property (retain, nonatomic) CMCCallable *didClickDescriptionLabel;
@property (retain, nonatomic) CMCCallable *didClickAvatarOfProfilelessUser;
@property (retain, nonatomic) CMCCallable *didClickNameOfProfilelessUser;
@property (retain, nonatomic) CMCCallable *didClickLivePallet;
@property (retain, nonatomic) CMCCallable *didClickAvatarOfProfileUser;
@property (retain, nonatomic) CMCCallable *trackAwesomeSplashModelReceived;
@property (retain, nonatomic) CMCCallable *didClickAwesomeSplash;
@property (retain, nonatomic) CMCCallable *trackClickOnUserAvatar;
@property (retain, nonatomic) CMCCallable *didClickCarAnchor;
@property (retain, nonatomic) CMCCallable *didClickNormalAppAnchor;
@property (retain, nonatomic) CMCCallable *trackPlay;
@property (retain, nonatomic) CMCCallable *setUpVideoTimeObsever;
@property (retain, nonatomic) CMCCallable *openAdsExplanation;
@property (retain, nonatomic) CMCCallable *reportAd;
@property (retain, nonatomic) CMCCallable *getAdReportInfo;
@property (retain, nonatomic) CMCCallable *reportViewerAction;
@property (retain, nonatomic) CMCCallable *performCustomLeftPanAction;
@property (retain, nonatomic) CMCCallable *trackLeftPanTransition;
@property (retain, nonatomic) CMCCallable *notifyLeftPanTransitionToIronMan;
@property (retain, nonatomic) CMCCallable *trackProfilelessLeftPanTransition;
@property (retain, nonatomic) CMCCallable *destinationViewControllerForLeftPanTransition;
@property (retain, nonatomic) CMCCallable *shouldUseCustomActionWhenPanLeft;
@property (retain, nonatomic) CMCCallable *clickUserNickName;
@property (retain, nonatomic) CMCCallable *challengeCoverLinkJumpToOtherPage;
@property (retain, nonatomic) CMCCallable *didClickLearnMoveViewTagsView;

- (void).cxx_destruct;
- (id)init;

@end
