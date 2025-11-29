@class NSString, NSArray, NSDictionary, AWEAwemeModel, UILabel, UIView, AWELongPressPanelViewGroupModel;
@protocol AWEIMShareContactListProtocol, AWEIMSharePanelTrackIDGeneratorProtocol;

@interface AWELongPressInteractiveCellArchV2 : UITableViewCell <AWELongPressInteractiveCellProtocol, AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate>

@property (retain, nonatomic) id<AWEIMShareContactListProtocol> contactList;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *trackCommonParams;
@property (retain, nonatomic) id<AWEIMSharePanelTrackIDGeneratorProtocol> trackIDGenerator;
@property (retain, nonatomic) AWELongPressPanelViewGroupModel *interactiveGroupModel;
@property (weak, nonatomic) UIView *maskTargetView;
@property (readonly, nonatomic) NSArray *interactingGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (id)enterMethod;
- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)shareContactList:(id)a0 didSelectRecentShareWithShareModels:(id)a1 atIndex:(long long)a2;
- (void)shareContactList:(id)a0 stateDidChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)trackCommonParamsWithShareContactList:(id)a0;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (id)createShareContext;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)trackDidClickEmojiBtn;
- (void)configWithAweme:(id)a0;
- (BOOL)canShowIMContactListWithAweme:(id)a0;
- (void)customizeSendMessageWithConfig:(id)a0;
- (double)panelFullHeightWithAdditionTextView:(id)a0 keyboardShow:(BOOL)a1;
- (void)p_trackContactListShow;
- (void)p_updateClickStateIfNeed;
- (void)viewDidTap:(id)a0;
- (void)memoriesPlayerShareLocalToUserWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)closeFriendClickMoreFriendsWithCompletion:(id /* block */)a0;
- (id)config;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupView;

@end
