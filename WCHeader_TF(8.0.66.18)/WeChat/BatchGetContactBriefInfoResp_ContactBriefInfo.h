@class NSString, ModContact;

@interface BatchGetContactBriefInfoResp_ContactBriefInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) int ret;
@property (retain, nonatomic) ModContact *contact;

+ (void)initialize;

@end
