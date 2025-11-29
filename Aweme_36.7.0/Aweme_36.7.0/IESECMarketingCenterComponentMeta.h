@class NSString, NSDictionary, IESECMarketingCenterRitMeta, UIView;
@protocol IESECMarketingHybridContainerProtocol, IESECMarketingCenterComponentMetaDelegate;

@interface IESECMarketingCenterComponentMeta : NSObject <IESECMarketingHybridContainerDelegate>

@property (nonatomic) BOOL hasOpen;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *uiConfig;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (nonatomic) long long hybridContainerType;
@property (weak, nonatomic) UIView<IESECMarketingHybridContainerProtocol> *hybridContainer;
@property (nonatomic) BOOL isRootView;
@property (nonatomic) BOOL isDefaultView;
@property (nonatomic) long long zPosition;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *customData;
@property (weak, nonatomic) id<IESECMarketingCenterComponentMetaDelegate> delegate;
@property (weak, nonatomic) IESECMarketingCenterRitMeta *ritParent;
@property (readonly, copy, nonatomic) NSDictionary *layoutInfo;
@property (readonly, copy, nonatomic) NSDictionary *modifyData;
@property (readonly, nonatomic) UIView *componentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)marketingConfig;
- (BOOL)isBulletHost:(id)a0;
- (BOOL)isPuzzleHost:(id)a0;
- (void)customOpen;
- (void)openWithSchema:(id)a0 params:(id)a1;
- (id)modifySchema:(id)a0 withParams:(id)a1;
- (void)buildInOpenWithSchema:(id)a0;
- (void)publishFinishLoadEvent:(id)a0;
- (id)perParams:(id)a0;
- (BOOL)isMarketingView;
- (void)publishContentSizeUpdated:(struct CGSize { double x0; double x1; })a0;
- (id)fullLinkModifyData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referFrame;
- (void)publishStartLoadEvent;
- (id)tryFindLivePopupContainer;
- (void)monitorReportForOpen:(id)a0;
- (void)loadComponentWithSchema:(id)a0;
- (id)popupContainerClassName;
- (id)findSubviewOfClassInView:(id)a0 subviewClass:(id)a1;
- (BOOL)isViewInScreen:(id)a0;
- (void)container:(id)a0 didLoadWithError:(id)a1;
- (void)container:(id)a0 didLoadSuccessWithMessage:(id)a1;
- (void)containerViewDidFirstScreen:(id)a0;
- (BOOL)isAutoLayout;
- (void)openFirstScreen;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (BOOL)isDefault;
- (BOOL)isRoot;
- (void)updateWithData:(id)a0;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (id)eventParams;
- (void)updateLayout:(id)a0;

@end
