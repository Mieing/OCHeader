@class NSString;

@interface AWECommentIntentionComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonURL;
@property (copy, nonatomic) NSString *uuid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
