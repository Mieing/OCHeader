@class NSArray, AWEShareModel, NSString;

@interface AWEHotSearchDataFeedCellModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordList;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (copy, nonatomic) NSString *activeTime;
@property (copy, nonatomic) NSString *schema;

+ (id)shareInfoJSONTransformer;
+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
