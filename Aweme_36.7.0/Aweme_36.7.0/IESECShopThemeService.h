@class NSArray, UIColor, NSString;

@interface IESECShopThemeService : NSObject <IESECShopThemeService>

@property (nonatomic) unsigned long long flagshipStyle;
@property (copy, nonatomic) NSArray *headerBackLayerColors;
@property (retain, nonatomic) UIColor *extensionTipTitleColor;
@property (copy, nonatomic) NSString *extensionTipLottieFilePath;
@property (readonly, nonatomic) BOOL useFlagshipStyle;
@property (readonly, nonatomic) BOOL showFlagshipView;
@property (nonatomic) double headerThemeHeight;
@property (nonatomic) BOOL useDarkStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFlagshipStyle:(unsigned long long)a0;
- (void)configHeaderBackLayer;
- (void)configExtensionTipView;
- (void).cxx_destruct;
- (id)init;

@end
