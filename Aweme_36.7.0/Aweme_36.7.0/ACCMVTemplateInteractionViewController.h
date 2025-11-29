@class ACCAnimatedButton, ACCLoadingAndVolumeView, NSString, AWEVideoPublishViewModel, ACCMvAmountView, UIImageView, NSDictionary, UILabel, NSIndexPath;
@protocol ACCMVTemplateVideoPlayProtocol, ACCMVTemplateModelProtocol;

@interface ACCMVTemplateInteractionViewController : UIViewController <ACCMVTemplateInteractionProtocol>

@property (retain, nonatomic) ACCMvAmountView *usageAmountView;
@property (retain, nonatomic) ACCMvAmountView *fragmentAmountView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) ACCLoadingAndVolumeView *loadingView;
@property (retain, nonatomic) ACCAnimatedButton *pickResourceButton;
@property (retain, nonatomic) ACCAnimatedButton *newStyleFavoriteBtn;
@property (retain, nonatomic) ACCAnimatedButton *newStylePickResourceBtn;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL isSwitchCollecting;
@property (nonatomic) BOOL useTopbarFavorite;
@property (nonatomic) BOOL hiddenPickResourceBtnIcon;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCMVTemplateVideoPlayProtocol> videoPlayDelegate;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (retain, nonatomic) ACCAnimatedButton *favoriteButton;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (copy, nonatomic) NSString *preferedPickResourceButtonTitle;
@property (nonatomic) BOOL hideCollectBtn;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *itemId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playLoadingAnimation;
- (void)doFavoriteAcitonWithComletion:(id /* block */)a0;
- (void)p_setupNewStyleUI;
- (void)p_handleSingleTapOnView:(id)a0;
- (BOOL)isInspirationPage;
- (void)p_updateFavoriteIconIfNeed;
- (void)p_updateDataInNewStyle;
- (void)p_handleFavoriteButtonClicked:(id)a0 completion:(id /* block */)a1;
- (void)p_origHandleFavoriteButtonClicked:(id)a0 completion:(id /* block */)a1;
- (void)p_doFavoriteIconAnimation:(BOOL)a0;
- (void)p_handleFavoriteButtonClicked;
- (void)p_enterUserProfile:(id)a0;
- (void)p_handlePickResourceButtonClicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)stopLoadingAnimation;

@end
