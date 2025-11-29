@class AWEIMChatModel, NSString, NSArray, UIImage, AWEIMChatCellHintViewModel, NSAttributedString, NSDictionary, AWEIMChatCellHintModel, AWEIMUserViewModel;
@protocol AWEIMStrangerMainViewModelDelegate, AWEIMChatListHintProviderCellInterface;

@interface AWEIMStrangerMainViewModel : NSObject <AWEIMChatDataControllerCallbackDelegate, AWEIMMainStrangerViewModelProtocol>

@property (retain, nonatomic) AWEIMUserViewModel *messageSenderOrRecallerVM;
@property (retain, nonatomic) AWEIMChatCellHintViewModel *hintVM;
@property (retain, nonatomic) AWEIMChatCellHintModel *displayingHintModel;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *time;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSAttributedString *messageText;
@property (copy, nonatomic) NSAttributedString *draftText;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long weight;
@property (copy, nonatomic) NSString *accessibilityMessageLabelText;
@property (weak, nonatomic) id<AWEIMChatListHintProviderCellInterface> hintProviderService;
@property (weak, nonatomic) id<AWEIMStrangerMainViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (nonatomic) unsigned long long viewModelType;
@property (nonatomic) BOOL isTrash;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL enableDraftHintProvider;
@property (nonatomic) BOOL shouldShowVerifiedLogo;
@property (nonatomic) BOOL allowShowVerifiedLogoWhenAccountIsVerifiedEnterprise;
@property (copy, nonatomic) NSArray *disabledLabelStatus;
@property (copy, nonatomic) NSString *trackerTabName;

- (void)updateName:(id)a0;
- (BOOL)p_needAppendLastMessage:(id)a0;
- (void)callback_chatUpdate:(id)a0;
- (void)callback_chatDeleted:(id)a0 chatInserted:(id)a1 firstPage:(BOOL)a2 reason:(long long)a3;
- (void)callback_totalUnreadCountUpdate:(unsigned long long)a0;
- (void)callback_peerUserUpdate:(id)a0 ofChat:(id)a1;
- (void)callback_didEndPullOfflineMessagesWithHasMore:(BOOL)a0;
- (id)__getHighLightHintColor;
- (void)updateDraftText;
- (void)updateMessageLabelDisplayText;
- (void)clearStrangerLabels;
- (void)analysisExt:(id)a0;
- (void)calCellHeight;
- (void)updateHintViewModelWithChatModel:(id)a0;
- (void)convertToAge;
- (void)updateDisplayTextAccordingToUser:(id)a0;
- (id)displayTextForChat;
- (id)p_attributedContent:(id)a0 emojiImage:(id)a1;
- (id)p_attributedContent:(id)a0;
- (id)__replaceWithHintForContent:(id)a0;
- (id)__convertTimeStamp:(double)a0;
- (void)updateTime;
- (void).cxx_destruct;

@end
