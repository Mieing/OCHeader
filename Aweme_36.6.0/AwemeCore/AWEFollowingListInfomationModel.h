@class NSArray;

@interface AWEFollowingListInfomationModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *fansTagArray;

+ (id)fansTagArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
