@class NSString;

@interface AFDBookDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *coverColor;
@property (nonatomic) long long coverColorType;
@property (copy, nonatomic) NSString *coverColorA;
@property (copy, nonatomic) NSString *coverColorB;
@property (copy, nonatomic) NSString *shootVideoSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
