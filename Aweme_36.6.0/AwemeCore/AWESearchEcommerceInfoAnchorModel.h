@class NSString, NSArray;

@interface AWESearchEcommerceInfoAnchorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *totalText;
@property (copy, nonatomic) NSString *currentProductID;
@property (copy, nonatomic) NSArray *goods;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
