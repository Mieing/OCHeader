@class NSString, WCFinderMemberShipIntroducePushParams, ForwardMessageLogicController, WCFinderMemberShipZoneIntroduceHeaderData, NSMutableSet, WCFinderContact;
@protocol WCFinderMembershipIntroduceViewModelDelegate;

@interface WCFinderMembershipIntroduceViewModel : WCFinderMemberShipBaseVM <ForwardMessageLogicDelegate>

@property (retain, nonatomic) WCFinderMemberShipZoneIntroduceHeaderData *headerData;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) WCFinderMemberShipIntroducePushParams *params;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (nonatomic) unsigned long long memberShipStatus;
@property (nonatomic) unsigned long long visitorStatus;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (copy, nonatomic) NSString *wecoinProductId;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) unsigned long long unsubscribeMsId;
@property (weak, nonatomic) id<WCFinderMembershipIntroduceViewModelDelegate> delegate;
@property (readonly, nonatomic) int profileEnterType;
@property (readonly, nonatomic) BOOL isAuthorPerspective;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)blockTitleStr;
- (id)blockDescStr;
- (id)initWithParams:(id)a0;
- (void)getLocalDatas;
- (void)getRemoteDatas;
- (void)onGetDetailInfo:(id)a0;
- (void)shareNameCardToFriend;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (id)transformFinderDataItemToContentVM:(id)a0 uiModel:(BOOL)a1;
- (id)transformPreviewInfoToMediaWrap:(id)a0;
- (void)handleLiveNoticeForUser:(id)a0 successBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
