@class NSString, AWEUGDesktopChannelGuideInstallConfigModel, AWEUGDesktopChannelGuideTrackerInfoModel;

@interface AWEUGDesktopChannelTabBubbleGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *componentId;
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
