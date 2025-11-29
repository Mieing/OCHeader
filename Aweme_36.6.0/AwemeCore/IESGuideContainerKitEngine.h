@class NSString, IESLiveStackTemplate;

@interface IESGuideContainerKitEngine : NSObject <IESLiveLayoutContainerProvider>

@property (weak, nonatomic) IESLiveStackTemplate *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addView:(id)a0 viewType:(id)a1;
- (id)queryContainerByType:(id)a0;
- (id)queryViewByType:(id)a0;
- (BOOL)addViewElement:(id)a0;
- (BOOL)addView:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (BOOL)addView:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)removeViewElement:(id)a0;
- (void)bindContainerProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
