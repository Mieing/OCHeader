@class NSURL, DUXBasicSheet, UILabel, AWELocalMomentNotesInfo, UIButton, UIView, NSString, DUXButton, CMCPublishModel, AFDCloseFriendsShowSnackbarHelper, AWEAwemeModel, AFDCloseFriendsMyNotesPanelLoadingView, UIImageView;
@protocol AFDCloseFriendsBubblePanelDelegate, AFDCloseFriendsBubblePanelDataSource;

@interface AFDCloseFriendsMyNotesPanelViewController : UIViewController <AFDMomentNotesMessage, DUXSheetDelegate>

@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXButton *publishButton;
@property (retain, nonatomic) UILabel *visibilityLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) AFDCloseFriendsMyNotesPanelLoadingView *loadingView;
@property (retain, nonatomic) CMCPublishModel *publishModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AFDCloseFriendsShowSnackbarHelper *showSnackbarHelper;
@property (nonatomic) BOOL isPanelShowing;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) AWEAwemeModel *preloadItem;
@property (weak, nonatomic) id<AFDCloseFriendsBubblePanelDataSource> dataSource;
@property (weak, nonatomic) id<AFDCloseFriendsBubblePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (id)publishButtonTitle;
- (void)trackVideoPlay;
- (id)initWithNotesInfo:(id)a0 uid:(id)a1;
- (void)didPublishNotesSucceed:(id)a0 withPublishModel:(id)a1;
- (void)didGetAweme:(id)a0;
- (void)requestAwemeWithItemId:(id)a0;
- (void)reportHasRead;
- (id)appendCustomString:(id)a0 ToDetailText:(id)a1;
- (id)deleteButtonTitle;
- (void)onClickDeleteButton:(id)a0;
- (void)onClickPublishButton:(id)a0;
- (void)didClickPublishNotesButton;
- (id)panelConfigDict;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (id)bubble;
- (void)setupUI;

@end
