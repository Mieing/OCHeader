@class NSString, NSArray, NSDictionary;

@interface AWEPadPMCAlbumCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long status;
@property (nonatomic) long long episodeUpdateAt;
@property (nonatomic) long long label;
@property (copy, nonatomic) NSString *rewardList;
@property (copy, nonatomic) NSString *categoryStrType;
@property (copy, nonatomic) NSString *categoryStrTopic;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long releaseTime;
@property (retain, nonatomic) NSArray *cover;
@property (retain, nonatomic) NSArray *actorList;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *updateCycle;
@property (nonatomic) long long pattern;
@property (retain, nonatomic) NSArray *languageList;
@property (nonatomic) long long seqsCount;
@property (nonatomic) long long seriesRank;
@property (copy, nonatomic) NSString *seriesTab;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *typeList;
@property (nonatomic) BOOL isCollect;
@property (nonatomic) long long collectCount;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long groupSource;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *labelInfo;
@property (retain, nonatomic) NSArray *verticalCoverList;
@property (retain, nonatomic) NSArray *horizontalCoverList;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *albumItemID;
@property (copy, nonatomic) NSString *episodeItemID;
@property (copy, nonatomic) NSString *bookingId;
@property (nonatomic) BOOL hasSubscribe;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long freeStartTime;
@property (nonatomic) long long freeEndTime;
@property (copy, nonatomic) NSString *limitedFreeSubtitle;
@property (retain, nonatomic) NSDictionary *coverLabelInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
