@class NSNumber;
@protocol AWEIMQuickReplyControllerHandlerPortocol, AWEIMShareModelProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AWELongPressPanelShareFriendViewModel : AWELongPressPanelBaseViewModel <AWEIMStreakDisplayManagerDelegate>

@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) NSNumber *rank;
@property (nonatomic) BOOL hasShared;

+ (BOOL)shouldShowTranspondIMShareWithAwemeModel:(id)a0 referString:(id)a1;
+ (BOOL)p_isAwemeAuthorPrivate:(id)a0;
+ (BOOL)shouldShowTranspondInFriendOrPartVisibleWithAwemeModel:(id)a0;
+ (id)longPressPanelViewModel;
+ (BOOL)needSupportShareTextWithAweModel:(id)a0;

- (id)customIMStreakTextFont;
- (void)trackClickShareButtonWithShareModel:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtraDict:(id)a3;
- (id)generateCommomParamsWithShareModel:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (void)shareToUser:(id)a0 dismiss:(id /* block */)a1 completion:(id /* block */)a2 awemeModel:(id)a3 referString:(id)a4 logExtraDict:(id)a5;
- (void)shareFriendText;
- (void)fetchConversationWithShareModel:(id)a0 completion:(id /* block */)a1;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)fetchSubTitleAttributedTitleStackViewArrayWithShareModel:(id)a0 subTitleMaxWidth:(double)a1 completion:(id /* block */)a2;
- (void)fetchSubTitleAttributedStringWithShareModel:(id)a0 subTitleMaxWidth:(double)a1 completion:(id /* block */)a2;
- (id)generateLongPressTrackParamsWithShareModel:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (void)p_trackAfterSendMessageWithShareModel:(id)a0 awemeModel:(id)a1 params:(id)a2 referString:(id)a3 logExtra:(id)a4;
- (void)configInputViewButtons;
- (void)sharePrivateFriendsWithToast:(BOOL)a0;
- (void)memoriesPlayerShareLocalToUser;
- (void)closeFriendMomentShareToUser;
- (void)p_shareToUser:(id)a0 dismiss:(id /* block */)a1 completion:(id /* block */)a2 awemeModel:(id)a3 referString:(id)a4 logExtraDict:(id)a5;
- (void)p_trackShareVideoToChatWithShareModel:(id)a0 referString:(id)a1 awemeModel:(id)a2 CommonParams:(id)a3;
- (void)sendShareMessageWithShareModel:(id)a0 awemeModel:(id)a1 params:(id)a2 logExtra:(id)a3 referString:(id)a4 dismiss:(id /* block */)a5 completion:(id /* block */)a6;
- (void)p_trackShareHotTrendingBoardSuccessWithParams:(id)a0;
- (id)generateAspectParamsWithShareModel:(id)a0 awemeModel:(id)a1 referString:(id)a2 logExtra:(id)a3;
- (void)p_compareKnowledgeParamsWithPassthroughParams:(id)a0 awemeModel:(id)a1 logExtra:(id)a2 referString:(id)a3;
- (void)p_trackPOIConcernGoodsWithShareModel:(id)a0 awemeModel:(id)a1;
- (void)p_trackShareVideoSuccessWithShareModel:(id)a0 awemeModel:(id)a1 params:(id)a2;
- (void)trackClickPostScript;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
