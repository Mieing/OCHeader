@class NSString, IESECURLModel, NSArray, NSNumber;

@interface IESECFeedResourceCardWindowModel : IESECFeedResourceCardBaseNode

@property (nonatomic) BOOL followStatus;
@property (retain, nonatomic) NSNumber *authorID;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *windowInterest;
@property (retain, nonatomic) IESECURLModel *authorAvatar;
@property (retain, nonatomic) NSArray *products;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
