@class YYTextLayout, NSString, AWEIMShareLongVideoInfo, NSDictionary, AWEURLModel, AWEIMCardMessageAnchorInfo, AWEIMUser, NSNumber;

@interface AWEIMCardMessage : AWEIMMessage <AWEIMFoldMessageProtocol, AWEIMMessageConfigProtocol, AWEIMMessageShootSameProtocol>

@property (copy, nonatomic) NSString *sendSource;
@property (nonatomic) BOOL isAIGC;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUID;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long coverHeight;
@property (nonatomic) long long coverWidth;
@property (nonatomic) BOOL isHotSpotVideo;
@property (nonatomic) long long hotSpotCreateTime;
@property (copy, nonatomic) NSString *contentName;
@property (retain, nonatomic) AWEURLModel *contentThumb;
@property (retain, nonatomic) YYTextLayout *contentLayout;
@property (nonatomic) BOOL isNotFirstShow;
@property (retain, nonatomic) AWEIMCardMessageAnchorInfo *anchorInfo;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSDictionary *poiTrackParams;
@property (copy, nonatomic) NSString *createID;
@property (nonatomic) BOOL isStory;
@property (nonatomic) BOOL isSlides;
@property (nonatomic) long long isLivePhoto;
@property (nonatomic) long long isText;
@property (copy, nonatomic) NSNumber *publishWay;
@property (copy, nonatomic) NSString *profileUID;
@property (retain, nonatomic) AWEIMShareLongVideoInfo *longVideoInfo;
@property (nonatomic) long long pineapple;
@property (copy, nonatomic) NSNumber *pineappleRedPacketStatus;
@property (copy, nonatomic) NSNumber *pineappleRedPacketHasQuestion;
@property (copy, nonatomic) NSString *shareId;
@property (nonatomic) long long shareWithTimestamp;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (double)IMShareFeedCardViewH;

- (id)videoCardVideoId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (double)bubbleMaxHeight;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (id)getStickerID;
- (id)playStickerCustomHint;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)isAllowedForward;
- (id)itemIDUsedForContentAvailableRefresh;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (BOOL)isAutoSyncMsg;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
