@class NSString, EcsJumpInfo, EcsShopIcon;

@interface EcsUserShopInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *headImg;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) EcsJumpInfo *shopJumpInfo;
@property (retain, nonatomic) EcsShopIcon *shopIcon;
@property (nonatomic) unsigned long long bizuin;

+ (void)initialize;

@end
