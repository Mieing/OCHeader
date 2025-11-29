@class NSArray, AWECodeGenCollectDiversionModel, AWECodeGenCollectDiversionReportModel, NSString;

@interface AWECodeGenV1UserMusicCollectV2Response : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *mcListModelArray;
@property (nonatomic) long long cursor;
@property (nonatomic) long long hasMore;
@property (retain, nonatomic) AWECodeGenCollectDiversionModel *collectDiversionModel;
@property (retain, nonatomic) AWECodeGenCollectDiversionReportModel *diversionReportModel;
@property (copy, nonatomic) NSString *nextCursorNew;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
