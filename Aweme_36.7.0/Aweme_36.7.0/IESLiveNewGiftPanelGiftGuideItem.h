@class IESLiveNewGiftPanelContext, NSString, UIView;

@interface IESLiveNewGiftPanelGiftGuideItem : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (id)initialData;
- (id)initWithPanelContext:(id)a0;
- (void)loadLynxView;
- (id)urlString;
- (void).cxx_destruct;

@end
