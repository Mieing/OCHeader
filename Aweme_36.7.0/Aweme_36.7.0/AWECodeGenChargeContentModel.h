@class AWECodeGenSeriesNewMixModel, NSString, AWECodeGenContentStatisModel, AWECodeGenUrlModel, AWECodeGenUserModel, AWECodeGenWatchedModel, NSArray;

@interface AWECodeGenChargeContentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *contentName;
@property (retain, nonatomic) AWECodeGenUrlModel *coverUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (retain, nonatomic) AWECodeGenContentStatisModel *statisModel;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWECodeGenUserModel *authorModel;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long contentType;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (retain, nonatomic) AWECodeGenWatchedModel *watchedRecordModel;
@property (nonatomic) int hasPaidEpisodes;
@property (nonatomic) BOOL hasPlayRight;
@property (copy, nonatomic) NSString *albumLabel;
@property (copy, nonatomic) NSString *albumType;
@property (copy, nonatomic) NSArray *actorArray;
@property (nonatomic) int diggCount;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) int albumYear;
@property (copy, nonatomic) NSString *albumTag;
@property (nonatomic) int movieDuration;
@property (nonatomic) long long detailContentType;
@property (nonatomic) int isIaa;
@property (retain, nonatomic) AWECodeGenUrlModel *darkIconUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *lightIconUrlModel;
@property (retain, nonatomic) AWECodeGenSeriesNewMixModel *seriesNewMixInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
