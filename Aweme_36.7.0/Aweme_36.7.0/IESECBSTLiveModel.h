@class NSString, NSNumber;

@interface IESECBSTLiveModel : IESECBSTBaseModel

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *bstGroupType;
@property (retain, nonatomic) NSNumber *originReport;
@property (retain, nonatomic) NSNumber *isAd;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
