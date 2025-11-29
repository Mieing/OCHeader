@class SettingPageItem;

@interface SettingPageMapper : NSObject

@property (retain, nonatomic) SettingPageItem *rootItem;

+ (id)sharedMapper;

- (id)init;
- (void)setupOldMapping;
- (void)setupNewMapping;
- (id)viewControllerForPaths:(id)a0;
- (void).cxx_destruct;

@end
