@class NSString;

@interface AWECodeGenUgcTrendsGameInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *mapId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
