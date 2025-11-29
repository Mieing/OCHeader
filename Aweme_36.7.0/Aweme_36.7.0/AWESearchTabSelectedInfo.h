@class NSString;

@interface AWESearchTabSelectedInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *passThroughParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
