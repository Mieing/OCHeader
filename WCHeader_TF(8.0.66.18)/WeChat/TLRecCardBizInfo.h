@class NSString;

@interface TLRecCardBizInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *recReason;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *brandIconUrl;

+ (void)initialize;

@end
