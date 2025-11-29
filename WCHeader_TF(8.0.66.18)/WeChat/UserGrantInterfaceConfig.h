@class UserGrantInterfaceBody, UserGrantInterfaceFooter, UserGrantInterfaceTitle;

@interface UserGrantInterfaceConfig : WXPBGeneratedMessage

@property (retain, nonatomic) UserGrantInterfaceTitle *title;
@property (retain, nonatomic) UserGrantInterfaceBody *body;
@property (retain, nonatomic) UserGrantInterfaceFooter *footer;

+ (void)initialize;

@end
