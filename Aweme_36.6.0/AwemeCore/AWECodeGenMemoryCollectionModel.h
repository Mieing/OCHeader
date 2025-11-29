@class NSString, NSArray, AWECodeGenStatisticsInfoModel;

@interface AWECodeGenMemoryCollectionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *collectionid;
@property (copy, nonatomic) NSArray *assetidsArray;
@property (copy, nonatomic) NSString *topicname;
@property (copy, nonatomic) NSString *topicid;
@property (copy, nonatomic) NSString *followtopicname;
@property (copy, nonatomic) NSString *followtopicid;
@property (nonatomic) int collectiontype;
@property (nonatomic) long long createtime;
@property (nonatomic) double qualityscore;
@property (nonatomic) long long startshowtime;
@property (nonatomic) long long endshowtime;
@property (copy, nonatomic) NSString *coverassetid;
@property (copy, nonatomic) NSString *collectionname;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) AWECodeGenStatisticsInfoModel *statisticsinfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
