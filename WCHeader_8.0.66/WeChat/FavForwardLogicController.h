@class NSString, NSMutableDictionary, ForwardMessageLogicController, NSArray, NSMutableArray;
@protocol FavForwardLogicDelegate;

@interface FavForwardLogicController : MMObject <ForwardMessageLogicDelegate, MMTipsViewControllerDelegate, SharePreConfirmSheetViewExt> {
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSArray *m_forwardingItems;
    NSArray *m_forwardingDataWraps;
    NSMutableArray *m_messageWrapList;
    BOOL m_bAddAppMsgSourceType;
    BOOL m_isFromSession;
}

@property (retain, nonatomic) NSMutableDictionary *forwardMessageLogics;
@property (retain, nonatomic) NSMutableArray *shareSheetStack;
@property (weak, nonatomic) id<FavForwardLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)ForwardFavItemList:(id)a0 delegate:(id)a1;
- (void)ForwardFavItemList:(id)a0 toUser:(id)a1 delegate:(id)a2;
- (void)forwardFavDataItemWraps:(id)a0 delegate:(id)a1;
- (void)forwardFavDataItemWraps:(id)a0 ToUser:(id)a1 delegate:(id)a2;
- (id)checkBaseMsgForwardFavDataItemWraps:(id)a0;
- (void)forwardFavDataItemWraps:(id)a0 ToUser:(id)a1 delegate:(id)a2 showConfirmView:(BOOL)a3;
- (BOOL)addFavItemList:(id)a0;
- (void)ForwardFavItem:(id)a0 ToUser:(id)a1 delegate:(id)a2;
- (void)BaseMsgForwardFavItem:(id)a0 ToUser:(id)a1 delegate:(id)a2;
- (void)doForwardFavItem:(id)a0 ToUser:(id)a1 delegate:(id)a2 showConfirmView:(BOOL)a3;
- (void)forwardMessage:(id)a0 delegate:(id)a1;
- (void)forwardMessage:(id)a0 toUser:(id)a1 delegate:(id)a2;
- (void)forMessage:(id)a0;
- (void)forMessage:(id)a0 showConfirmView:(BOOL)a1;
- (void)addMsgFromItem:(id)a0;
- (void)checkAppMsgSourceType:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)OnSharePreConfirmSheetViewShow:(id)a0;
- (void)OnSharePreConfirmSheetViewClose:(id)a0;
- (id)currentLogicController;
- (void).cxx_destruct;

@end
