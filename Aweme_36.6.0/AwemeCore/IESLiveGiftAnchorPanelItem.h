@class NSString, RACCommand;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftAnchorPanelItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol>

@property (copy, nonatomic) NSString *anchorPanelUrl;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)tapEntrance;
- (void).cxx_destruct;

@end
