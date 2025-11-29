@class AWEUGDesktopLynxGuideConfigModel, NSString, AWEUGDesktopChannelTabBubbleGuideConfigModel, AWEUGDesktopSnakeBarGuideConfigModel, AWEUGDesktopRetainPopupGuideConfigModel, AWEDesktopSystemPopupGuideModel, AWEUGDesktopMediaRetainPopupGuideConfigModel;

@interface AWEUGDesktopChannelGuideUIConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *jsonString;
@property (retain, nonatomic) AWEUGDesktopChannelTabBubbleGuideConfigModel *tabBubbleModel;
@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *halfScreenAlertModel;
@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *imageMediumScreenModel;
@property (retain, nonatomic) AWEUGDesktopSnakeBarGuideConfigModel *bottomSnackBarAlertModel;
@property (retain, nonatomic) AWEUGDesktopSnakeBarGuideConfigModel *bottomImageSnackBarAlertModel;
@property (retain, nonatomic) AWEUGDesktopRetainPopupGuideConfigModel *retainPopupModel;
@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *mediaHalfScreenModel;
@property (retain, nonatomic) AWEUGDesktopMediaRetainPopupGuideConfigModel *mediaRetainPopupModel;
@property (retain, nonatomic) AWEUGDesktopLynxGuideConfigModel *lynxGuideModel;
@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *installConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
