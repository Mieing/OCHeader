@class BizChatUser, NSString;

@interface BizChatSearchContactMatchedUser : WXPBGeneratedMessage

@property (retain, nonatomic) BizChatUser *user;
@property (retain, nonatomic) NSString *matchedField;
@property (retain, nonatomic) NSString *matchedValue;

+ (void)initialize;

@end
