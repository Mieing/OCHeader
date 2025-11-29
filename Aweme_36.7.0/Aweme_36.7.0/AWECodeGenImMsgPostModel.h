@class NSString;

@interface AWECodeGenImMsgPostModel : AWEBaseDataModel

@property (nonatomic) int actionType;
@property (nonatomic) long long conversationShortId;
@property (copy, nonatomic) NSString *conversationType;
@property (nonatomic) int uiInfo;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
