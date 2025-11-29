@class IESLiveVideoGiftController, NSString, UIImageView, IESIMContactPickerComponentContext, UIView, UILabel;

@interface IESIMContactPickerIncentiveBackgroundComponent : AWEIMComponentBase <IESLiveVideoGiftControllerDelegate, IESIMContactPickerContentAction, IESIMContackPickerViewControllerLifeCylceAction, IESIMContactPickerComponentViewProvider>

@property (retain, nonatomic) IESIMContactPickerComponentContext *pickerComponentContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *mainTitleImageLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLiveVideoGiftController *player;
@property (retain, nonatomic) UIImageView *staticShipImageView;
@property (retain, nonatomic) UIImageView *titleBackgroundImageView;
@property (nonatomic) BOOL hasFinishLoadData;
@property (nonatomic) BOOL haveData;
@property (nonatomic) BOOL panelHasShow;
@property (nonatomic) BOOL hasTrackPanelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didFinishPlayingWithError:(id)a1;
- (void)videoGiftController:(id)a0 isReadyToPlayOnView:(id)a1;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)containerVCWillDragToDismiss;
- (void)containerVCWillTapToDismiss;
- (void)contactPickerConentService:(id)a0 didLoadData:(id)a1;
- (BOOL)p_canShowBoatAlphaVideo;
- (void)p_updateWithStaticShipView;
- (void)p_trackPanelShow;
- (id)p_getBoatAlphaVideoResourcePath;
- (id)p_getStaticBoatImage;
- (id)p_getTitleBackGroundImage;
- (id)p_getPanelMainTitleImage;
- (id)getSubTitleLabelAttributeText;
- (void)p_handelSubTitleClick;
- (id)getSubTitleLabelText;
- (double)p_getSubtitlePopUpViewHeight;
- (id)getSubTitleClickInfoView;
- (id)p_getInfoMainText;
- (id)p_getInfoSubTextArray;
- (id)p_getSubInfoTextViewWithString:(id)a0 number:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)componentView;
- (void)playVideo;

@end
