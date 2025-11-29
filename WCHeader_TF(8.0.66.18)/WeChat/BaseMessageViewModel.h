@class NSString, CMessageWrap, CBaseContact;
@protocol RecordNodeDataSource;

@interface BaseMessageViewModel : BaseChatViewModel <MsgImgFullScreenTransitionComponent, IMessageNodeStatusExt, IBaseMessageViewModel>

@property (readonly, nonatomic) unsigned int msgStatus;
@property (nonatomic) int viewModelScene;
@property (weak, nonatomic) id<RecordNodeDataSource> recordNodeDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CBaseContact *contact;
@property (retain, nonatomic) NSString *customHeadImageUrl;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly, nonatomic) BOOL isSender;
@property (retain, nonatomic) NSString *cpKeyForChatRoomMessage;
@property (retain, nonatomic) NSString *cpKeyForChatRoomDisplayName;
@property (nonatomic) BOOL isChatRoomMessageUnsafe;
@property (nonatomic) BOOL isChatRoomDisplayNameUnsafe;
@property (nonatomic) BOOL isShowStatusView;
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerMessageViewModelClass:(Class)a0;
+ (void)initMessageViewModelClassListForIOS;
+ (void)initMessageViewModelClassListForVisionOS;
+ (void)initMessageViewModelClassList;
+ (id)createMessageViewModelWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (BOOL)canCreateMessageViewModelInBackgroundWithMessageWrap:(id)a0;
+ (BOOL)canCreateMessageViewModelWhilePreloadWithMessageWrap:(id)a0;
+ (BOOL)canCreateMessageViewModelWhilePreload;
+ (BOOL)canCreateViewModelInBackground;
+ (id)getChatRoomDisplayNameWithContact:(id)a0 chatContact:(id)a1;

- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)a0;
- (BOOL)isComponentHidden;
- (BOOL)isRecordDetail;
- (BOOL)isMsgRecordDetail;
- (BOOL)isFavRecordDetail;
- (BOOL)isShareConfirm;
- (BOOL)canMeasureContentViewSizeInBackground;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)accessibilityDescription;
- (id)accessibilityValue;
- (id)additionalAccessibilityDescription;
- (id)additionalAccessibilityDescription2;
- (id)accessibilityMessageType;
- (BOOL)canShowMsgReplyMenuItem;
- (void)updateCrashProtectedState;
- (BOOL)isShowSendOKView;
- (void)updateContentViewHeight:(double)a0;
- (int)revokeTimeLimitInSecond;
- (id)getRevokeMsgCustomizeActionSheet;
- (BOOL)isMsgCanBatchRevoke;
- (unsigned long long)batchRevokeMsgCount;
- (unsigned long long)batchRevokeScene;
- (void)resetLayoutCache;
- (struct CGSize { double x0; double x1; })rowContentSize;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)chatRoomDescName;
- (id)chatRoomDisplayName;
- (id)chatRoomTextStateIconDescription;
- (void)onMessageUpdateStatus;
- (void).cxx_destruct;

@end
