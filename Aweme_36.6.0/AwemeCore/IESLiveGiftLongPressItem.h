@class IESLiveFantasticGiftGroupSelectionListItem, IESLiveGiftMostlyUsedButtonViewModel, IESLiveGiftPanelDataSharing, RACCommand, NSString;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftLongPressItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) IESLiveFantasticGiftGroupSelectionListItem *selectionListItem;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveGiftMostlyUsedButtonViewModel *mostlyUsedOperationViewModel;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void).cxx_destruct;

@end
