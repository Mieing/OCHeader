@class NSString;

@interface AWESearchMerchandiseClickAction : AWEBaseApiModel

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
