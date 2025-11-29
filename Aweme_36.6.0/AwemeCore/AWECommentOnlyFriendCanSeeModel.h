@class NSString;

@interface AWECommentOnlyFriendCanSeeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *buttonSubDesc;
@property (copy, nonatomic) NSString *unsetDesc;
@property (copy, nonatomic) NSString *unsetSubDesc;
@property (copy, nonatomic) NSString *setDesc;
@property (copy, nonatomic) NSString *visitorDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
