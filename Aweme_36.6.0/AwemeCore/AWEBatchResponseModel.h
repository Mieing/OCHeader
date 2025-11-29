@class NSArray;

@interface AWEBatchResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *errorItemsID;
@property (copy, nonatomic) NSArray *successItemID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
