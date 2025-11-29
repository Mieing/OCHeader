@class MMLiteAppViewController, NSString, CMessageWrap, EmoticonStoreItem, MMScrollActionSheet, CEmoticonWrap, EmoticonCustomAddLogicController, PersonalDesigner, EmoticonHalfScreenSendView;

@interface MMEmotionMsgBrowseLiteAppLogic : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, IEmoticonDownloadExt, IMsgRevokeExt, MMUIViewControllerDelegate, EmoticonStoreItemExt, IStoreEmotionDesignerInfoMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (retain, nonatomic) NSString *currentDesignerId;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) CEmoticonWrap *currentPageEmoticonWrap;
@property (weak, nonatomic) MMLiteAppViewController *viewController;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController;
@property (retain, nonatomic) NSString *operatingMd5;
@property (readonly, nonatomic) CEmoticonWrap *operatingEmoticonWrap;
@property (nonatomic) int emotionScene;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) long long vcHash;
@property (retain, nonatomic) EmoticonHalfScreenSendView *halfScreenSendView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLogicWithMessageWrap:(id)a0 attachedLiteAppVC:(id)a1;
+ (id)createLogicWithEmoticonWrap:(id)a0 attachedLiteAppVC:(id)a1;

- (BOOL)onOpenScrollActionSheet:(id)a0;
- (void)configRowItems;
- (void)addActionSheetItem:(unsigned long long)a0 iconImage:(id)a1 title:(id)a2 toArray:(id)a3;
- (void)handleClickActionSheetItemShareFriend:(id)a0;
- (void)onSaveEmoticon;
- (void)onFollowEmoticonCamera;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)scrollActionSheetDidCancel:(id)a0;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (id)extraDataForExpose;
- (id)initWithEmoticonWrap:(id)a0 attachedLiteAppVC:(id)a1;
- (void)dealloc;
- (id)getChatName;
- (id)getDesc:(id)a0;
- (void)reportBottomCellAction:(unsigned long long)a0;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (id)getReportFromUsr;
- (BOOL)shouldGetDescFromMsgWrap;
- (void)tryGetAdditionalInfoForFirstEnter;
- (id)getViewController;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (id)operatingEmoticonWrap;
- (void).cxx_destruct;

@end
