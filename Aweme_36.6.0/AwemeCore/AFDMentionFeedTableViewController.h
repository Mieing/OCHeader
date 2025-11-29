@class NSString, NSMutableDictionary, AWEButton, NSMutableSet, UIView, AFDMentionFeedDataController, UILabel;

@interface AFDMentionFeedTableViewController : AWEAwemeDetailTableViewController <UITableViewDelegate>

@property (retain, nonatomic) NSMutableSet *readCommentSet;
@property (retain, nonatomic) NSMutableSet *repliedCommentSet;
@property (retain, nonatomic) NSMutableDictionary *binds;
@property (retain, nonatomic) AFDMentionFeedDataController *dataController;
@property (retain, nonatomic) UIView *mentionInfoContainerView;
@property (retain, nonatomic) AWEButton *mentionUserAvatarView;
@property (retain, nonatomic) UILabel *mentionFromUserLabel;
@property (retain, nonatomic) UILabel *mentionDescriptionLabel;
@property (nonatomic) BOOL isInPureMode;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *mentionPlayMethod;
@property (copy, nonatomic) NSString *accountType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)zoomTransitionItemOffset;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)cellReuseIdentifierForRowWithModel:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (BOOL)shouldShowDiscoverEntranceView;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)createDefaultConfig;
- (void)p_clickedBottomInputBar:(id)a0;
- (id)identifierArray;
- (void)p_updateCurrentAweme:(id)a0;
- (void)p_postReplyMentionNotification;
- (void)p_reportMenitonStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateUpperRightButtonHidden:(BOOL)a0 awemeModel:(id)a1;
- (void)p_updateMentionDescriptionViewWithAweme:(id)a0;
- (void)p_registerCell;
- (void)p_addMentionDescriptionViewIfNeeded;
- (id)displayNameFromMentionUserWithAweme:(id)a0;
- (id)p_getDescriptionStringWithModel:(id)a0;
- (long long)requestEnterFrom;
- (BOOL)p_isDisplayingMentionAweme:(id)a0;
- (id)mentionTypeStringWithModel:(id)a0;
- (id)repliedTypeStringWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)viewDidLoad;
- (void)dealloc;

@end
