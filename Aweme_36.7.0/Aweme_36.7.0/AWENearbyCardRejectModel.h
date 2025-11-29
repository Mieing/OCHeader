@class NSString;

@interface AWENearbyCardRejectModel : AWEBaseApiModel

@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *msg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
