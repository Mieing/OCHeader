@class NSString, NSNumber;

@interface IESECAddToCartResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *cartID;
@property (retain, nonatomic) NSNumber *cartNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
