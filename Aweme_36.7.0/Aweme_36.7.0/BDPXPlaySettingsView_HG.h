@class UIView, NSString, NSArray, BDPMorePanelItem, BDPUniqueID, UIImageView, UIButton, BDPSwitch, UICollectionView, UILabel;
@protocol XPlayResolution, BDPXPlaySettingsViewDelegateProtocol;

@interface BDPXPlaySettingsView_HG : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPXPlaySettingsViewDelegateProtocol> delegate;
@property (retain, nonatomic) NSArray *resolutionList;
@property (retain, nonatomic) id<XPlayResolution> lastEffectiveResolution;
@property (retain, nonatomic) id<XPlayResolution> selectedResolution;
@property (retain, nonatomic) BDPMorePanelItem *morePanelItem;
@property (nonatomic) BOOL networkSwitchState;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *backIcon;
@property (retain, nonatomic) UILabel *naviTitle;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *clarityTitle;
@property (retain, nonatomic) UILabel *netDelayTitle;
@property (retain, nonatomic) UILabel *delayNumLabel;
@property (retain, nonatomic) UICollectionView *clarityGroup;
@property (retain, nonatomic) BDPSwitch *netDelayShowSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startShow;
- (void)onClickBack;
- (id)getMorePanelItem;
- (void)xplayLoadFailed;
- (void)switchToTargetResolution:(id)a0;
- (void)updateDelayNum:(id)a0;
- (BOOL)isNetworkGood:(long long)a0;
- (void)handleSwitchAction:(BOOL)a0;
- (long long)findTargetResolutionIndex:(id)a0 targetResolution:(id)a1;
- (id)initWithUniqueID:(id)a0 resolutionList:(id)a1 defaultResolution:(id)a2 delegate:(id)a3 networkSwitchState:(BOOL)a4;
- (void)onSwitchResolutionCallback:(BOOL)a0 resolution:(id)a1;
- (void)onChangePlayQuality:(id)a0;
- (void)onChangeNetworkStatus:(long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (void)insertItem;

@end
