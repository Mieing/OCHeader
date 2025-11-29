@class NSString, AFDRecUserListExitStrategy, AWEUserRecommendBaseCellViewLayout;

@interface AWEUserRecommendManagerContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *targetUserNickname;
@property (nonatomic) long long firstPageCount;
@property (nonatomic) long long pageCount;
@property (nonatomic) BOOL needUserExtra;
@property (nonatomic) BOOL needShowStory24;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *followTitleConfigScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *showMethod;
@property (copy, nonatomic) NSString *enterFromTab;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (nonatomic) long long nextPrePageType;
@property (nonatomic) long long fromAction;
@property (nonatomic) long long subPageType;
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) BOOL showsHeader;
@property (copy, nonatomic) NSString *customHeaderTitle;
@property (nonatomic) BOOL showsHeaderSeparator;
@property (nonatomic) double headerTopPadding;
@property (nonatomic) BOOL showsCellSeparator;
@property (retain, nonatomic) AWEUserRecommendBaseCellViewLayout *cellLayout;
@property (nonatomic) double defaultCellHeight;
@property (nonatomic) long long contactIndex;
@property (nonatomic) long long newRecommendCountSource;
@property (nonatomic) BOOL useNewRecommendCountUsers;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (copy, nonatomic) id /* block */ getUserProfileLogExtraParams;
@property (nonatomic) BOOL enableClose;
@property (nonatomic) long long countToPermanentlyClose;
@property (nonatomic) double daysToReappearAfterClosed;
@property (retain, nonatomic) NSString *liteInteractEnterMethod;
@property (retain, nonatomic) NSString *liteInteractEnterFrom;
@property (copy, nonatomic) NSString *enterPosition;
@property (nonatomic) BOOL enableLightInteraction;
@property (nonatomic) BOOL enableClickLITransferToSendMsg;
@property (nonatomic) BOOL needLoadMore;
@property (nonatomic) long long placeholderCellCount;
@property (nonatomic) BOOL usesDefaultFooter;
@property (nonatomic) double customFooterHeight;
@property (nonatomic) BOOL showsFooterWhenEmpty;
@property (nonatomic) long long remainingCountToLoadMore;
@property (retain, nonatomic) AFDRecUserListExitStrategy *recUserListExitStrategy;
@property (copy, nonatomic) id /* block */ highValueSourceFallbackBlock;
@property (copy, nonatomic) id /* block */ followButtonConfigureBlock;
@property (nonatomic) BOOL isMateRecommend;
@property (nonatomic) long long impressionReportScene;
@property (nonatomic) long long dislikeReportScene;
@property (copy, nonatomic) NSString *cardType;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
