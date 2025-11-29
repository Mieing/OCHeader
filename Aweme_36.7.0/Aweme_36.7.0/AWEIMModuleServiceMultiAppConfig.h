@class NSString;

@interface AWEIMModuleServiceMultiAppConfig : HTSService <AWEIMModuleServiceMultiAppConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDisableCloseFriends;
- (BOOL)disableLive;

@end
