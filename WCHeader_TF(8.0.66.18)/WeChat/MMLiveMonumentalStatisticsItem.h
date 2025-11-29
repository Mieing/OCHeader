@class NSString;

@interface MMLiveMonumentalStatisticsItem : NSObject

@property (nonatomic) unsigned long long tier;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSString *trophyPagUri;
@property (retain, nonatomic) NSString *trophyPagMd5Hash;
@property (retain, nonatomic) NSString *trophyLabel;
@property (retain, nonatomic) NSString *congratulatoryMessage;
@property (retain, nonatomic) NSString *reportingId;

+ (id)monumentalStatisticsItemWithBackendModel:(id)a0;

- (void).cxx_destruct;

@end
