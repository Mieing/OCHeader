@class IESLiveFantasticGiftGroupSelectionListItem, NSString, IESLiveNewGiftPanelContext, UIView;

@interface IESLiveNewGiftPanelGroupSendItem : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveAioLinkGiftGroupCardActionUseCase, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) IESLiveFantasticGiftGroupSelectionListItem *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;
+ (BOOL)shouldShowFantasticGroupSelectionListWithGiftItem:(id)a0;

- (void)didSetAttachingDIContext;
- (id)initialData;
- (id)initWithPanelContext:(id)a0;
- (void)loadLynxView;
- (void)didSelectGroupCard:(id)a0 text:(id)a1 giftID:(id)a2;
- (void)sendLog:(id)a0 params:(id)a1;
- (void)loadNativeView;
- (id)urlString;
- (void).cxx_destruct;

@end
