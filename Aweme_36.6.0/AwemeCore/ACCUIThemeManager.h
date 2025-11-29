@class NSHashTable;

@interface ACCUIThemeManager : NSObject

@property (nonatomic) unsigned long long currentThemeStyle;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (id)sharedInstance;

- (void)switchToTheme:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
