@class NSDictionary;

@interface AWEUGSceneDesktopInstallConfig : NSObject

@property (copy, nonatomic) NSDictionary *installTypeViewTypeMap;

- (id)handleInstallConfigData:(id)a0;
- (id)handleVideoGuideData:(id)a0;
- (id)handleShortcutGuideData:(id)a0;
- (id)handlePIPGuideData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
