@class NSString;

@interface MMKUUIDServiceImpl : NSObject <MMKUUIDService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUuid;
- (BOOL)adbEnable;
- (BOOL)developmentSettingEnable;
- (id)getOaid;
- (BOOL)isWechatClient;
- (id)getExtendInfo;

@end
