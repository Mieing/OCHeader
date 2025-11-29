@class NSString;

@interface IESLiveGameInteractStickerTemplate01RoleInfo : NSObject

@property (nonatomic) BOOL isLogin;
@property (copy, nonatomic) NSString *roleName;
@property (copy, nonatomic) NSString *roleIcon;
@property (copy, nonatomic) NSString *roleTag;

+ (id)modelWithDict:(id)a0;

- (void).cxx_destruct;

@end
