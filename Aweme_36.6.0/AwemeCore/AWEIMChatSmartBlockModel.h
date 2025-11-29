@class NSString;

@interface AWEIMChatSmartBlockModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *smartBlockType;
@property (copy, nonatomic) NSString *smartBlockText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
