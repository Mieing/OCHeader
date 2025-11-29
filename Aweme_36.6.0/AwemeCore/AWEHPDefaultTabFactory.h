@class NSString, NSMutableDictionary;

@interface AWEHPDefaultTabFactory : NSObject <AWEAppAwemeSettingMessage, AWEHPDefaultTabFactoryProtocol>

@property (retain, nonatomic) NSMutableDictionary *defaultTabIdToBottomTabItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPDefaultTabCommonAdapterClass;

- (id)getBottomTabConfig;
- (BOOL)getServerEnable;
- (id)aAWEHPDefaultTabCommonAdapter;
- (id)getDefaultBottomTabItemModelWithTabId:(id)a0;
- (id)getTopTabConfig;
- (void).cxx_destruct;

@end
