@class NSString, AWEUGDesktopChannelGuideInstallConfigModel, AWEUGDesktopChannelGuideTrackerInfoModel;

@interface AWEUGDesktopSnakeBarGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *guidePic;
@property (copy, nonatomic) NSString *rightButtonText;
@property (copy, nonatomic) NSString *bottomHeight;
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
