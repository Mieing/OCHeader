@class LiteAppConfigStoreModel, LiteAppConfigSystemPermissionModel, NSArray, LiteAppConfigAllowedJsApiModel, LiteAppConfigShareModel;

@interface LiteAppConfigModel : NSObject

@property (retain, nonatomic) LiteAppConfigStoreModel *store;
@property (retain, nonatomic) LiteAppConfigShareModel *share;
@property (retain, nonatomic) LiteAppConfigSystemPermissionModel *systemPermission;
@property (retain, nonatomic) LiteAppConfigAllowedJsApiModel *jsapi;
@property (retain, nonatomic) NSArray *triggerActions;
@property (nonatomic) BOOL globalUpdate;

- (id)init;
- (void).cxx_destruct;

@end
