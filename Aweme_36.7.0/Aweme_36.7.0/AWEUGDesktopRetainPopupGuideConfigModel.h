@class AWEUGDesktopChannelGuideInstallConfigModel, NSString, AWEUGDesktopChannelGuideTrackerInfoModel, UIImage;

@interface AWEUGDesktopRetainPopupGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *guidePic;
@property (retain, nonatomic) UIImage *guideImage;
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
