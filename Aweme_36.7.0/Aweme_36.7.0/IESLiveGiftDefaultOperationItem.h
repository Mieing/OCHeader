@class NSString, RACCommand, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftDefaultOperationItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol>

@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly, nonatomic) RACCommand *loginActionCommand;
@property (readonly, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoginWithLiveAuth;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void).cxx_destruct;

@end
