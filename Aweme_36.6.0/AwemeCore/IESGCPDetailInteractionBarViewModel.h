@class NSString, IESGCPDetailInteractionBarThemeConfig, IESGCPPBNowPlayEntrance, NSDictionary;

@interface IESGCPDetailInteractionBarViewModel : IESGCPDetailBaseViewModel <IESGCPDIContextSubscriber, IESGCPAudienceDetailScrollActions>

@property (retain, nonatomic) IESGCPPBNowPlayEntrance *interactiveInfo;
@property (retain, nonatomic) IESGCPDetailInteractionBarThemeConfig *themeConfig;
@property (nonatomic) double currentAnimationProgress;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *subicon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *btnTitle;
@property (nonatomic) BOOL placeHolder;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (void)openSchema;
- (void)didSetGameCPDIContext;
- (void)audienceDetailHalfToFullScreenThemeAnimationProgress:(double)a0;
- (void)trackClickWithType:(id)a0;
- (void)trackShowWithType:(id)a0;
- (id)trackParamsWithType:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
