@class NSString, LiteAppJsApiPluginScheduler, NSMutableDictionary;

@interface MMLiteAppWidgetHandler : NSObject

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appUuid;
@property (copy, nonatomic) id /* block */ willdisappearBlock;
@property (copy, nonatomic) id /* block */ darkModeChangeBlock;
@property (nonatomic) int lastFlags;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) BOOL homeIndicatorHidden;
@property (nonatomic) unsigned long long interfaceOrientationMask;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL isPopGestureEnable;
@property (nonatomic) BOOL forbidRightGestureEnable;
@property (retain, nonatomic) LiteAppJsApiPluginScheduler *jsApiPluginScheduler;
@property (retain, nonatomic) NSMutableDictionary *extraData;
@property (nonatomic) long long storeUiStatusBarStyle;

- (id)initWithAppId:(id)a0 appUuid:(unsigned int)a1;
- (void).cxx_destruct;

@end
