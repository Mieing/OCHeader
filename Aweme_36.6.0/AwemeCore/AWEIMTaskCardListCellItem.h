@class NSString, AWEIMWorkSpaceCardModel;

@interface AWEIMTaskCardListCellItem : NSObject <AWEIMPrimaryKey>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *highlightText;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSString *timeString;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL mute;
@property (nonatomic) long long timeStamp;
@property (retain, nonatomic) AWEIMWorkSpaceCardModel *cardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getInKey;
- (void)__addObserverForUpdateUnreadCount;
- (void)__updateTabbarUnreadCount;
- (void)setCardMute:(BOOL)a0;
- (void)unreadCountOperation:(unsigned long long)a0 byCount:(long long)a1;
- (id)initWithModel:(id)a0;
- (id)attributedSubtitle;
- (void).cxx_destruct;
- (void)setRead;

@end
