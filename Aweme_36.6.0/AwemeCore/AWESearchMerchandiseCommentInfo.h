@class NSString, NSArray;

@interface AWESearchMerchandiseCommentInfo : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *avatarList;
@property (nonatomic) long long textSplitIndex;

+ (id)avatarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
