@class NSArray, NSString, NSNumber, AWEIMCardMessageAnchorViewModel;

@interface AWEIMCardMessageViewModel : AWEIMMessageViewModel <AWEIMFansGroupFeedEmojisProtocol, AWEIMCardMessageViewModelInterface>

@property (retain, nonatomic) NSNumber *shouldShowFansGroupFeedEmojisMemoryFlag;
@property (retain, nonatomic) NSArray *fansGroupFeedEmojiModels;
@property (nonatomic) BOOL hasFetchedAwemeData;
@property (nonatomic) long long fansGroupDigCount;
@property (copy, nonatomic) NSString *fansGroupDigCountDesc;
@property (nonatomic) BOOL hasShowansGroupDigCount;
@property (nonatomic) BOOL needTrackFlowerShowThisLifeCycle;
@property (retain, nonatomic) AWEIMCardMessageAnchorViewModel *anchorViewModel;
@property (nonatomic) BOOL isLastShouldShowMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL cardShow;
@property (nonatomic) BOOL isQuotedReply;
@property (nonatomic) BOOL needFold;

- (void)onAwemeDiggChanged:(id)a0;
- (void)willDisplayByMessageVisibleLifeCycle;
- (void)didEndDisplayingByMessageVisibleLifeCycle;
- (id)ecomTrackParamsWithMsg:(id)a0;
- (void)setupWithMessage:(id)a0;
- (void)changeShowFansGroupFeedEmojisMessageWithNewMessageId:(id)a0;
- (BOOL)enableFansGroupFeedEmojis;
- (void)__setupAnchorViewModelWithMessage:(id)a0;
- (void)tryAddAutoSyncFeedImageAlbumNotice;
- (void)setShouldShowShowFansGroupFeedEmojisWithFlag:(BOOL)a0;
- (void)setFansGroupFeedEmojisModelsWithModels:(id)a0;
- (BOOL)shouldShowFansGroupFeedEmojis;
- (BOOL)isMeetAllFansGroupFeedEmojisConditions;
- (BOOL)__updateGroupOwnerFeedDigInfo;
- (BOOL)__isGroupOwner;
- (void)trackEcomFeedCardMsgShow;
- (id)ecomTrackParamsForAnchor;
- (BOOL)tryUpdateGroupOwnerFeedDigInfo;
- (BOOL)isStyleWithSingleRow;
- (BOOL)isStyleWithDoubleRow;
- (id)fansGroupFeedEmojisModels;
- (void)fansGroupFeedEmojisDidShowTracker;
- (void)fansGroupFeedEmojisDidTapTracker;
- (void).cxx_destruct;
- (void)dealloc;
- (double)customHeight;

@end
