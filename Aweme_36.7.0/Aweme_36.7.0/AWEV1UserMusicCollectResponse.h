@class NSArray, AWECollectDiversionModel, AWECollectDiversionReportModel;

@interface AWEV1UserMusicCollectResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *mcListModelArray;
@property (nonatomic) int cursor;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) AWECollectDiversionModel *collectDiversionModel;
@property (retain, nonatomic) AWECollectDiversionReportModel *diversionReportModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
