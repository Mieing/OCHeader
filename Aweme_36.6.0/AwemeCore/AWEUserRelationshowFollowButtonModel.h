@interface AWEUserRelationshowFollowButtonModel : AWEBaseApiModel

@property (nonatomic) BOOL showButton;
@property (nonatomic) long long showTag;

+ (id)showTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
