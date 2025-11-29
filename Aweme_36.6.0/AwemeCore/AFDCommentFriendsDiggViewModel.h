@class AWELikeListDataController, NSArray, AWEAwemeModel, NSMutableAttributedString;

@interface AFDCommentFriendsDiggViewModel : NSObject

@property (retain, nonatomic) AWELikeListDataController *dataController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableAttributedString *bottomPrivacyAttributedString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } settingsRange;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL needReloadData;
@property (nonatomic) long long lineState;
@property (nonatomic) long long singleLineMaxCount;
@property (nonatomic) long long bottomPrivacyLineState;
@property (nonatomic) long long favoriteOnItem;

- (id)initWithAwemeModel:(id)a0 isBGColorWhite:(BOOL)a1;
- (id)p_labelFont;
- (id)p_labelTextColor;
- (void)updatePrivacyAttributedText:(id)a0;
- (void)loadMoreDiggUserListWithCompletion:(id /* block */)a0;
- (void)fetchDiggUserListWithCompletion:(id /* block */)a0;
- (void)updateBottomPrivacyText;
- (BOOL)enableStoryDiggCountDataUpdate;
- (void)didUpdateDiggList;
- (void)updateStoryLikeElementIfNeeded;
- (BOOL)enableOptimizeStoryDiggCountUpdate;
- (id)privacyParagraphStyle;
- (BOOL)shouldUseNewPrivacyText;
- (void)tapBottomPrivacyActionLabel;
- (id)commonStyleAttributedString:(id)a0;
- (id)p_actionLabelColor;
- (BOOL)shouldShowPrivacyText;
- (void).cxx_destruct;

@end
