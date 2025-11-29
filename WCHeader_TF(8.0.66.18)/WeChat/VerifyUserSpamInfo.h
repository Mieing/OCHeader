@class NSString;

@interface VerifyUserSpamInfo : WXPBGeneratedMessage

@property (nonatomic) int block;
@property (retain, nonatomic) NSString *wordingTitle;
@property (retain, nonatomic) NSString *wordingDetail;
@property (retain, nonatomic) NSString *wordingUrl;

+ (void)initialize;

@end
