@class CJPayServerThemeStyle, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayThemeStyleManager : NSObject <CJPayThemeStyleService, CJPaySettingChangeProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) CJPayServerThemeStyle *serverTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ settingsChangeBlock;

+ (void)registerComponents;
+ (void)registerPlugin;
+ (id)shared;

- (void)p_BizRefreshStyle:(id)a0;
- (void)i_updateThemeStyleWithThemeDic:(id)a0;
- (void)updateConfigWithSettings;
- (void)p_refreshStyle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateStyle:(id)a0;

@end
