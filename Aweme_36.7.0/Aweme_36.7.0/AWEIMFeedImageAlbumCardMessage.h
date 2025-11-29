@class AWEURLModel;

@interface AWEIMFeedImageAlbumCardMessage : AWEIMFeedCardMessage

@property (nonatomic) long long imageCount;
@property (nonatomic) long long currentImageIndex;
@property (copy, nonatomic) AWEURLModel *coverURLV2;
@property (retain, nonatomic) AWEURLModel *realCoverURL;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)isAllowedForward;
- (id)itemIDUsedForContentAvailableRefresh;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
