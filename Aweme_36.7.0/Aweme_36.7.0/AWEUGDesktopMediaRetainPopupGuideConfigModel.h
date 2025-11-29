@class AWEUGDesktopChannelGuideInstallConfigModel, NSString, AWEUGDesktopChannelGuideTrackerInfoModel, UIImage;

@interface AWEUGDesktopMediaRetainPopupGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *guideVideoResourceUrl;
@property (copy, nonatomic) NSString *guideVideoResourcePath;
@property (copy, nonatomic) NSString *loadingBackgroundUrl;
@property (retain, nonatomic) UIImage *loadingBackgroundImage;
@property (copy, nonatomic) NSString *leftButtonText;
@property (copy, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) AWEUGDesktopChannelGuideInstallConfigModel *installConfig;
@property (retain, nonatomic) AWEUGDesktopChannelGuideTrackerInfoModel *trackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
