@class NSString, AWEAwemeModel, AWEPlayletInfoModel, AWECodeGenSeriesFeedInsertInfoModel;

@interface AWEPlayletCardFeedInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPlayletInfoModel *playletInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *fromGroupId;
@property (retain, nonatomic) AWECodeGenSeriesFeedInsertInfoModel *insertInfoModel;

+ (id /* block */)isEqualBlock;
+ (id)awemeJSONTransformer;
+ (id)playletInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
