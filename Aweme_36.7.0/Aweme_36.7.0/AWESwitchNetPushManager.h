@class NSString, NSHashTable;

@interface AWESwitchNetPushManager : NSObject <AWESwitchNetPushManagerProtocol>

@property (retain, nonatomic) NSHashTable *plugins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSwitchNetPushView;
+ (void)showSwitchNetPushView;
+ (BOOL)shouldShowScene;
+ (id)sharedInstance;

@end
