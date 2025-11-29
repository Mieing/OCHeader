@class AFDBookInfoModel, NSString, AWEAwemeModel;

@interface AFDBookAwemeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AFDBookInfoModel *bookMessage;
@property (copy, nonatomic) NSString *bookDetailSchema;
@property (copy, nonatomic) NSString *shootSchema;

+ (id)awemeJSONTransformer;
+ (id)bookMessageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
