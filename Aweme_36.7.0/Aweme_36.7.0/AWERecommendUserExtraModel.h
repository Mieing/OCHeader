@class NSNumber, NSString, NSArray;

@interface AWERecommendUserExtraModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *story24BlurCoverList;
@property (nonatomic) unsigned long long addButtonType;

+ (id)awemeListJSONTransformer;
+ (id)story24BlurCoverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)itemList;

@end
