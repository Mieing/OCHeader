@class NSString, IESLiveActivityDetailItem, UIView, IESLiveNewGiftPanelContext;

@interface IESLiveNewGiftPanelActivityDetailItem : NSObject <IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveActivityDetailItem *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (id)initWithPanelContext:(id)a0;
- (void)unmount;
- (void).cxx_destruct;
- (void)loadView;
- (void)mount;

@end
