@class NSArray, NSString, NSDictionary, AWEAwemeModel;

@interface AWEDetailPageShootSameSchemaRequestModel : NSObject

@property (retain, nonatomic) NSArray *materialList;
@property (nonatomic) unsigned long long detailPageType;
@property (copy, nonatomic) NSString *identify;
@property (copy, nonatomic) NSDictionary *activityMobDic;
@property (copy, nonatomic) NSDictionary *extraInfoDic;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void).cxx_destruct;

@end
