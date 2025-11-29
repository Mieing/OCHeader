@class NSString, Color, RoleIcon;

@interface UserRole : WXPBGeneratedMessage

@property (nonatomic) unsigned int role;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *wordColor;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) Color *color;
@property (retain, nonatomic) Color *bgColor;
@property (retain, nonatomic) RoleIcon *roleIcon;

+ (void)initialize;

@end
