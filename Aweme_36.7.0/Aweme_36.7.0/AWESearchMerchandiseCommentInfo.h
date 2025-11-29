@class NSString, NSArray;

@interface AWESearchMerchandiseCommentInfo : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *avatarList;

+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
