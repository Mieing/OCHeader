@class AWEUGDesktopChannelGuideInstallConfigModel, NSString, NSArray, UIImage, UIView, AWEUGDesktopChannelGuideTrackerInfoModel;

@interface AWEDesktopSystemPopupGuideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long guideStyle;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSArray *contentImages;
@property (retain, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double contentX;
@property (nonatomic) double contentY;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentAreaHeight;
@property (copy, nonatomic) NSString *desktopButtonTitle;
@property (copy, nonatomic) NSString *guideVideoResourcePath;
@property (copy, nonatomic) NSString *guideVideoResourceUrl;
@property (copy, nonatomic) NSArray *loadingBackgroundUrls;
@property (retain, nonatomic) UIImage *loadingBackgroundImage;
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
