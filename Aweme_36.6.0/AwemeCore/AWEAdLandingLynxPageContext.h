@class UIColor, NSString, AWEOriginalAdLynxComponentModel, NSDictionary;

@interface AWEAdLandingLynxPageContext : AWEAdTaskContext

@property (nonatomic) unsigned long long panelScrollType;
@property (nonatomic) double customLandingHeight;
@property (retain, nonatomic) AWEOriginalAdLynxComponentModel *lynxComponent;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) unsigned long long lynxLandingNavigationBarStyle;
@property (nonatomic) BOOL isBackGroundVideoPlayingInFeedScene;
@property (copy, nonatomic) UIColor *colorForLoad;
@property (retain, nonatomic) NSDictionary *lynxRawData;
@property (nonatomic) BOOL shouldReuseLynxLandingPage;
@property (retain, nonatomic) UIColor *panelBackgroundColor;
@property (nonatomic) long long landingPageCornerRadius;
@property (copy, nonatomic) id /* block */ convertInfoFeedBackBlock;

- (void).cxx_destruct;

@end
