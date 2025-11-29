@class NSString, IESLiveVSGiftPanelDataSharing, NSNumber, IESLiveVSGiftPanelCommonReactionCenter;

@interface IESLiveVSGiftSectionChargeItem : IESLiveDynamicModel <IESLiveVSGiftPanelCommonReaction, IESLiveVSGiftSectionItem>

@property (retain, nonatomic) NSNumber *diamondCount;
@property (copy, nonatomic) id /* block */ diamondDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;

- (id)diffIdentifier;
- (void)currentDiamondDidUpdate:(id)a0;
- (id)initWithDataSharing:(id)a0 withReactionCenter:(id)a1;
- (void)updateWithDiamond:(id)a0;
- (BOOL)isEqualToDiffableItem:(id)a0;
- (void)tr_tap;
- (void).cxx_destruct;
- (void)tap;

@end
