@class AWEHPSideBarUIConfig;

@interface AWEHPSideBarBigFontManager : NSObject

@property (retain, nonatomic) AWEHPSideBarUIConfig *activeUIConfig;
@property (readonly, nonatomic) BOOL isBigFontModeOn;

+ (id)sharedInstance;

- (void)p_loadActiveUIConfig;
- (void).cxx_destruct;
- (id)init;

@end
