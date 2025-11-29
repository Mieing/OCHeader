@class NSString, AWEIMMessageConversation, AWEIMFavoriteFolderMessage;

@interface AWEIMFavoriteFolderMessageViewModel : NSObject <AWEIMCommonInviteTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMFavoriteFolderMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)titleNumberOfLines;
- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (BOOL)isDisableState;
- (long long)coverImageContentMode;
- (id)coverImageBackgroudColor;
- (id)coverImageString;
- (BOOL)shouldRefreshMessageInfo;
- (id)disableTitleString;
- (id)disableSubTitleString;
- (id)supportMenuItems;
- (void)traceCellWillDisplay;
- (void)didTapContainerView;
- (void).cxx_destruct;
- (id)detailString;
- (id)titleString;

@end
