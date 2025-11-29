@class NSString;

@interface AWEDoubleColumnSearchMerchandiseActivityIcon : AWEBaseApiModel

@property (copy, nonatomic) NSString *icon;
@property (nonatomic) long long type;
@property (nonatomic) long long num;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *darkurl;
@property (copy, nonatomic) NSString *lighturl;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
