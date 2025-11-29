@class NSDictionary, NSString;

@interface AWEUGDesktopChannelGuideDOUYINImpl : NSObject <AWEUGDesktopChannelGuideSettingProtocol>

@property (copy, nonatomic) NSDictionary *installNameToGdLabelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)desktopShortcutGdLabelWithInstallName:(id)a0;
- (void).cxx_destruct;

@end
