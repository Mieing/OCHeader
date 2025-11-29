@class AWEProfilePostUnreadNoticeModel, NSString;

@interface AWEUserWorkCellNoticeLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol, AWEProfilePostNoticeLabelServiceProtocol>

@property (retain, nonatomic) AWEProfilePostUnreadNoticeModel *unreadNoticeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildSubComponents;
- (void)bindEvents;
- (void)clearUnreadNoticeAfterCoverTapped;
- (unsigned long long)landingCommentTabType;
- (BOOL)canShowNoticeLabel;
- (void)trackMsgShow;
- (BOOL)dynamicComponent;
- (void)updateCachedUnreadNoticeModel;
- (void)clearUnreadNoticeWithOption:(unsigned long long)a0;
- (void)trackMsgShowIfNeeded;
- (void)updateCommentTabChangedObserver;
- (void)clearUnreadNotice:(id)a0;
- (void)commentTabDidSelectedNoti:(id)a0;
- (void)richAwemeFullPageNoti:(id)a0;
- (void)videoPlayNoti:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (long long)unreadCount;
- (void)dealloc;

@end
