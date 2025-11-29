@class NSString, WxaUseUserInfoItem, WxaUseUserInfoItem_ScopeItem;

@interface WAAuthManagerDeleteInfoModel : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WxaUseUserInfoItem *userInfoItem;
@property (retain, nonatomic) WxaUseUserInfoItem_ScopeItem *scopeItem;
@property (nonatomic) BOOL isFormPlugin;

- (id)initWithAppId:(id)a0 isFormPlugin:(BOOL)a1 userInfoItem:(id)a2 scopeItem:(id)a3;
- (id)toModUseUserInfoItem;
- (void).cxx_destruct;

@end
