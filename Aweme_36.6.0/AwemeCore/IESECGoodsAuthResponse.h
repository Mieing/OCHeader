@class NSNumber;

@interface IESECGoodsAuthResponse : IESECBaseApiModel

@property (nonatomic) long long result;
@property (retain, nonatomic) NSNumber *userID;
@property (readonly, nonatomic) BOOL success;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
