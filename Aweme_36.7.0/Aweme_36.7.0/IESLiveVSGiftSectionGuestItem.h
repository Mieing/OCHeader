@class NSString, IESLiveVSGiftGuestModel, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftPanelCommonReactionCenter;
@protocol IESLiveVSGiftGuestAPI;

@interface IESLiveVSGiftSectionGuestItem : IESLiveDynamicModel <IESLiveVSGiftSectionItem>

@property (retain, nonatomic) IESLiveVSGiftGuestModel *guestModel;
@property (retain, nonatomic) id<IESLiveVSGiftGuestAPI> api;
@property (copy, nonatomic) id /* block */ dataDidUpdate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (void)updateGuestInfo;
- (id)initWithDataSharing:(id)a0 withReactionCenter:(id)a1;
- (BOOL)isEqualToDiffableItem:(id)a0;
- (void)p_storeTitle:(id)a0 sendDesc:(id)a1;
- (void)p_loadFromStorageCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
