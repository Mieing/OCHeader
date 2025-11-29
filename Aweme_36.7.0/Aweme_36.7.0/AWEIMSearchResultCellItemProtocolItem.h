@class AWEIMFTSResultTowLineTextInfo, NSString, NSArray, AWEIMUser, AWEIMMessageConversation, AWEIMChatModel;

@interface AWEIMSearchResultCellItemProtocolItem : NSObject <AWEIMSearchResultCellItemProtocol, AWEIMPrimaryKey>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowStreakForPerson;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } titleHighlightRange;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subTitleHighlightRange;
@property (retain, nonatomic) AWEIMFTSResultTowLineTextInfo *towLineHighlightInfo;
@property (nonatomic) long long resultType;
@property (nonatomic) long long showSection;
@property (nonatomic) unsigned long long cellStyle;
@property (copy, nonatomic) NSString *converstionID;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (nonatomic) BOOL useSquareAvatar;
@property (nonatomic) BOOL showOnlineDot;
@property (nonatomic) double firstOnlineUpdateTime;
@property (nonatomic) unsigned long long activeRefresh;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMChatModel *chat;
@property (nonatomic) long long lastActiveTimeStamp;
@property (nonatomic) BOOL isCache;
@property (nonatomic) BOOL isMsgCombine;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) BOOL showBottomLine;
@property (nonatomic) BOOL isFuzzyResult;
@property (nonatomic) BOOL isSpaceSearchResult;
@property (nonatomic) BOOL isMultiRecallResult;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *timeText;
@property (copy, nonatomic) NSString *prefixText;
@property (nonatomic) long long messageType;
@property (nonatomic) long long aweType;
@property (copy, nonatomic) NSString *senderUID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *contentText;
@property (nonatomic) BOOL hasTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (BOOL)shouldFilterInsearchResult;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
