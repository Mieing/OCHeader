@interface IESECCartBusinessLineCount : IESECBaseApiModel

@property (nonatomic) long long businessLineID;
@property (nonatomic) long long cartCount;

+ (id)JSONKeyPathsByPropertyKey;

@end
