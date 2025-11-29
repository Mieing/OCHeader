@class NSString, NSDictionary, NSArray;

@interface IESECGoodsDetailHeaderTabItem : IESECBaseApiModel

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSArray *labelList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
