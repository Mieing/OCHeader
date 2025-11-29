@class NSString, IESLiveGiftPanelDataSharing, RACCommand, NSNumber, NSAttributedString;
@protocol IESLiveRoomService, IESLiveGiftPanelReaction;

@interface IESLiveJoinFansClubItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveFansGroupActions, IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) NSNumber *goldCoinsCount;
@property (retain, nonatomic) NSAttributedString *joinContent;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL isActionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (void)didSetAttachingDIContext;
- (BOOL)enableFansclubGiftPanelIncentiveGuide;
- (void)didReceiveHTSLiveFansclubMessage:(id)a0;
- (void)didFansGroupEntryInfoRequestFinish:(BOOL)a0 fansGroupEntryInfo:(id)a1;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)p_updateJoinContent;
- (void)p_fetchFansGroupEntryInfo;
- (void)p_requestFansclubInfo;
- (id)p_getAttributedString:(id)a0;
- (void)p_updateGoldCoinsCount:(id)a0;
- (void).cxx_destruct;

@end
