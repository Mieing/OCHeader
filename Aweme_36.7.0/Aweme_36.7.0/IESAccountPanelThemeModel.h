@class IESThemeFullScreenResModel, NSString, IESThemeGuideConfigModel, IESThemeInterceptConfigModel, IESThemeHalfScreenResModel;

@interface IESAccountPanelThemeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *themeId;
@property (nonatomic) long long guidShowFrequency;
@property (nonatomic) long long interceptThemeShowFrequency;
@property (nonatomic) long long maxThemeCount;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) IESThemeGuideConfigModel *guideConfig;
@property (retain, nonatomic) IESThemeInterceptConfigModel *interceptConfig;
@property (retain, nonatomic) IESThemeHalfScreenResModel *halfScreenRes;
@property (retain, nonatomic) IESThemeFullScreenResModel *fullScreenRes;
@property (copy, nonatomic) NSString *activityId;
@property (nonatomic) BOOL disableIfNoCheck;
@property (copy, nonatomic) NSString *redirectUrlAfterLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
