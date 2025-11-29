@class NSString;

@interface IWKPluginObject : NSObject <IWKPluginObject, IWKPluginWebViewBuilder, IWKPluginWebViewLoader, IWKPluginNavigationDelegate, IWKPluginUIDelegate>

@property (readonly, nonatomic) long long priority;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
