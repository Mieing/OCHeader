@class NSArray, NSString, AWEAwemeModel, NSDictionary, AWEHPBubbleInfo, AWEHPBadgeInfo;

@interface AWEFeedChannelEnterModel : AWEFeedChannelTrackBaseModel <NSCopying>

@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSArray *previousTabIDs;
@property (copy, nonatomic) NSString *callerId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL fromSecondPage;
@property (copy, nonatomic) NSString *landingStrategyId;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long topTabOrder;
@property (nonatomic) long long topTabOrderAlignMainTab;
@property (nonatomic) long long bottomTabOrder;
@property (nonatomic) long long bottomTabOrderAlignMainTab;
@property (nonatomic) long long topRecommendTabOrder;
@property (nonatomic) BOOL hasRedDot;
@property (copy, nonatomic) NSDictionary *landingParams;
@property (copy, nonatomic) NSString *parentTabId;
@property (nonatomic) BOOL hasForeignization;
@property (copy, nonatomic) NSString *foreignizationType;
@property (copy, nonatomic) NSString *lottieId;
@property (retain, nonatomic) AWEHPBubbleInfo *lastShowBubbleInfo;
@property (retain, nonatomic) AWEHPBadgeInfo *lastShowBadgeInfo;

- (void)updatePreviousTabIDsWithTabID:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
