@class NSString, NSMapTable, MMLiteAppPlatformViewPlugin;

@interface MMLiteAppPlatformViewFactory : NSObject <FlutterPlatformViewFactory>

@property (weak, nonatomic) MMLiteAppPlatformViewPlugin *plugin;
@property (retain, nonatomic) NSMapTable *viewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
