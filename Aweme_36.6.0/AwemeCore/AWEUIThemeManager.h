@class NSString, AWEUITheme, NSDictionary;

@interface AWEUIThemeManager : NSObject <AWEUIThemeManagerAdapter>

@property (class, readonly, nonatomic) BOOL isLightTheme;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEUITheme *currentTheme;
@property (nonatomic) BOOL imageNamedOptEnabled;
@property (copy, nonatomic) NSDictionary *imageBundleMap;
@property (nonatomic) BOOL colorPropertiesOptEnabled;

+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (id)fetchDefatulTheme;
+ (void)createImageBundleMap:(id /* block */)a0;
+ (id)fetchDefatulThemeDOUYINLiteAdapter;
+ (id)sharedInstance;

@end
