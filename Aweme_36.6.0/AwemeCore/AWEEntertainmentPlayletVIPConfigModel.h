@class NSString;

@interface AWEEntertainmentPlayletVIPConfigModel : AWEBaseApiModel

@property (nonatomic) unsigned long long vipType;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) long long productID;
@property (copy, nonatomic) NSString *buySchema;
@property (copy, nonatomic) NSString *librarySchema;

+ (id)productIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
