@class NSString;

@interface AWECommentBlockResultMapEntry : AWEBaseApiModel

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL result;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
