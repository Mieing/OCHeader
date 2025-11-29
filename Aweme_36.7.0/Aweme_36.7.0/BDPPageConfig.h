@class NSString, BDPWindowConfig, NSArray, NSDictionary, NSNumber;

@interface BDPPageConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) BDPWindowConfig *window;
@property (copy, nonatomic) NSString *extend;
@property (copy, nonatomic) NSArray *usingPluginComponents;
@property (retain, nonatomic) NSNumber *swipeBackMode;
@property (nonatomic, getter=isHideShareMenu) BOOL hideShareMenu;
@property (nonatomic) BOOL isManuallyShowShare;
@property (nonatomic, getter=isHideRecordMenu) BOOL hideRecordMenu;
@property (nonatomic, getter=isEnableCapture) BOOL disableCaptureShare;
@property (nonatomic, getter=isHideFansGroupMenu) BOOL hideFansGroupMenu;
@property (nonatomic) BOOL hideGoHomeButton;
@property (nonatomic) long long trustIsolationType;
@property (copy, nonatomic) NSArray *usingNewPluginComponents;
@property (copy, nonatomic) NSArray *usingIndustryComponents;
@property (copy, nonatomic) NSDictionary *usingLynxComponents;
@property (copy, nonatomic) NSDictionary *novelLynxComponents;
@property (copy, nonatomic) NSDictionary *pluginConfig;

+ (void)bootstrapLaunch;

- (void)mergeLynxPageInfoWithPath:(id)a0 lynxPages:(id)a1;
- (unsigned long long)popGestureSwipeBackMode;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
