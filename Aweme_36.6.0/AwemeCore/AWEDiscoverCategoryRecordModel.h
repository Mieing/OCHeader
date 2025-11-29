@class NSString, NSNumber, AWEDiscoverCategoryRecordImageModel;

@interface AWEDiscoverCategoryRecordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *wordID;
@property (retain, nonatomic) NSNumber *wordPosition;
@property (copy, nonatomic) NSString *wordContent;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) AWEDiscoverCategoryRecordImageModel *wordsImage;

+ (id)wordsImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
