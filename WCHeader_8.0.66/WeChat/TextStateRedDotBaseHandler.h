@class NSString;

@interface TextStateRedDotBaseHandler : NSObject <MMConfigMgrExt, IExptServiceExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)active;
- (BOOL)dispose;
- (unsigned int)configType;
- (void)onConfigChange;
- (void)onMMDynamicConfigUpdated;
- (void)onExptItemListChange;

@end
