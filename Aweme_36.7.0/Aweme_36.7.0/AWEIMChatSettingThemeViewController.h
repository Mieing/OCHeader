@class UIView, NSString, NSArray, UIImageView, UIButton, NSMutableSet, AWEIMThemeSettingPreviewView, UICollectionView, AWEIMUser, UILabel;
@protocol IESIMConversationProtocol;

@interface AWEIMChatSettingThemeViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWEIMThemeSettingPreviewViewDelegate, AWEIMChatThemeConfirmDelegate>

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentChatThemeKey;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (nonatomic) BOOL canTrackTopicShow;
@property (retain, nonatomic) NSMutableSet *hasTrackTopicSet;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (nonatomic) long long permission;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *completeBtn;
@property (retain, nonatomic) UIView *mainTitleView;
@property (retain, nonatomic) UILabel *mainTitleLable;
@property (retain, nonatomic) UIImageView *lockedView;
@property (retain, nonatomic) UILabel *subTitleLable;
@property (retain, nonatomic) AWEIMThemeSettingPreviewView *previewView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL adjustForBigFontStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_fetchData;
- (void)p_updateTitleWithModel:(id)a0;
- (void)p_constraintSubViews;
- (void)p_updateViewWithModel:(id)a0;
- (void)handleThemeDidChangeNoti:(id)a0;
- (void)p_closeBtnDidClicked:(id)a0;
- (void)p_trackWithEvent:(id)a0 otherParams:(id)a1;
- (void)handleChangeCustomBackgroundWithAsset:(id)a0;
- (void)handleChangeCustomBackgroundWithModel:(id)a0;
- (id)p_getCurrentChatThemeKey;
- (void)p_trackWithEvent:(id)a0 page:(id)a1 otherParams:(id)a2;
- (id)p_getCurrentModel;
- (void)p_updatePreviewViewWithModel:(id)a0;
- (void)p_setModelWithIndex:(long long)a0 isSelected:(BOOL)a1;
- (void)p_requestSetChatThemeWithModel:(id)a0 shareToOthers:(BOOL)a1;
- (BOOL)p_shouldShowAlertDialog;
- (void)p_showAlertDialog;
- (void)chatThemSetAllChoose:(id)a0;
- (void)p_pushConfirmViewControllerWithStyle:(long long)a0 chatThemeMode:(id)a1;
- (void)p_setCollectionViewOffsetWithIndex:(long long)a0;
- (void)p_setCollectionViewSelectedItemWithIndex:(long long)a0;
- (void)p_updateCompleteBtnWithModel:(id)a0;
- (void)p_createChatThemeSetContextWithModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_completeBtnDidClicked:(id)a0;
- (void)clickCustomBackGroundBtn;
- (void)clickSetSelfBtn;
- (void)clickSetAllBtn;
- (void)trackWithEvent:(id)a0 page:(id)a1 otherParams:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)loadView;

@end
