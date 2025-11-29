@class NSString, NSArray, NSDictionary, NSMutableDictionary, NSNumber, AWEHotSearchCommentDataSourceModel;

@interface AWEHotSearchCommentFeedPageContext : NSObject

@property (nonatomic) long long currentOuterType;
@property (nonatomic) long long currentTabType;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *sentenceId;
@property (copy, nonatomic) NSString *discussTitle;
@property (copy, nonatomic) NSString *hotSpotDesc;
@property (copy, nonatomic) NSArray *avatars;
@property (copy, nonatomic) NSString *hotListInfo;
@property (copy, nonatomic) NSNumber *discussingPV;
@property (copy, nonatomic) NSDictionary *hotListParam;
@property (retain, nonatomic) AWEHotSearchCommentDataSourceModel *dataSource;
@property (nonatomic) long long currTheme;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isGray;
@property (copy, nonatomic) NSString *inputPlaceholder;
@property (nonatomic) BOOL hotspotExpired;
@property (copy, nonatomic) NSString *insertCid;
@property (copy, nonatomic) NSString *insertReplyCid;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) BOOL hasAISummary;
@property (retain, nonatomic) NSNumber *eventDiscussID;
@property (nonatomic) BOOL isEventDiscuss;
@property (nonatomic) BOOL needLandAISummary;
@property (retain, nonatomic) NSNumber *landAISummaryID;
@property (nonatomic) BOOL isLoadedFullData;
@property (retain, nonatomic) NSNumber *countOfAISummary;
@property (copy, nonatomic) NSString *userVoteTags;
@property (nonatomic) BOOL voteIsEmphasis;

- (void)updateOuterTabType:(long long)a0;
- (void)updateFeedTabType:(long long)a0;
- (void).cxx_destruct;

@end
