@class NSString;

@interface AWECodeGenDogCardInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *dogCardText;
@property (nonatomic) int rank;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *rankSchema;
@property (nonatomic) long long dogCardId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
