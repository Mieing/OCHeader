@class NSString;

@interface AFDBookDetailPageLynxInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *lynxData;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *customType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
