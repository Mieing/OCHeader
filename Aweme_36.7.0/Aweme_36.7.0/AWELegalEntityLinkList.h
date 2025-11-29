@class NSString;

@interface AWELegalEntityLinkList : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
