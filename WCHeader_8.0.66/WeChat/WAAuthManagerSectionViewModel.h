@class NSString, WxaUseUserInfoItem;

@interface WAAuthManagerSectionViewModel : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WxaUseUserInfoItem *userInfoItem;
@property (nonatomic) BOOL isPlugin;
@property (nonatomic) BOOL isEdit;
@property (copy, nonatomic) id /* block */ deleteAction;

- (id)initWithAppId:(id)a0 isPlugin:(BOOL)a1 userInfoItem:(id)a2 isEdit:(BOOL)a3;
- (void).cxx_destruct;

@end
