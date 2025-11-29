@class IESLiveRefactGiftPanelViewBuilderLayoutInfo, NSDictionary, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftPanelReaction, IESLiveGiftModuleRecipientRouter;

@interface IESLiveNewGiftPanelContext : NSObject

@property (nonatomic) BOOL shouldShowRecipientEntrance;
@property (nonatomic) BOOL disableRecipientEntrance;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *layoutInfo;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (copy, nonatomic) NSDictionary *revenueMigrateAnniexConfig;
@property (readonly, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (copy, nonatomic) id /* block */ destroyNonClipViewContainerIfNeededBlock;

- (void)didSetAttachingDIContext;
- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftPageScrollViewDidScroll:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0 reaction:(id)a1 disableRecipientEntrance:(BOOL)a2;
- (id)initWithDataSharing:(id)a0 disableRecipientEntrance:(BOOL)a1;
- (void).cxx_destruct;

@end
