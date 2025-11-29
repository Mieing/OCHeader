@class NSString;

@interface AWESearchVideoWordsQueryRecordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *wordsSource;
@property (copy, nonatomic) NSString *queryID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
