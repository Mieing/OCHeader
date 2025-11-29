@class NSString;

@interface AWECollectDiversionReportModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) int relationTag;
@property (nonatomic) BOOL isMusician;
@property (nonatomic) int totalCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
