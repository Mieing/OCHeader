@class NSString;

@interface AWEPlayletStatusModel : AWEBaseApiModel

@property (nonatomic) long long status;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *statusDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
