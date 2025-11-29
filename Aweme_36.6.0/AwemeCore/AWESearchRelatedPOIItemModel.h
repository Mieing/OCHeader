@class NSString, AWEURLModel;

@interface AWESearchRelatedPOIItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) AWEURLModel *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
