@class NSString;

@interface AWEUGDesktopChannelGuideInstallConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionScheme;
@property (copy, nonatomic) NSString *installType;
@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSString *installStyleType;
@property (copy, nonatomic) NSString *pipVideoResourcePath;
@property (copy, nonatomic) NSString *pipVideoResourceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
