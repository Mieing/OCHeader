@class AWEIMCloseFriendMomentMessage, NSString;

@interface AWEIMCloseFriendMomentMessageViewModel : AWEIMMessageViewModel <AWEIMCloseFriendMomentTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMCloseFriendMomentMessage *realMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMessage:(id)a0;
+ (BOOL)contentIsAvailableWithMessage:(id)a0;
+ (id)unavailableStringWithMessage:(id)a0;

- (void)configCoverImageView:(id)a0;
- (id)momentContent;
- (void)setupWithMessage:(id)a0;
- (long long)quickReplyUIStyle;
- (void)configAuthorIconImageView:(id)a0;
- (void)configDescLabel:(id)a0;
- (void)configAuthorNameLabel:(id)a0;
- (void)configDescLabelBackgroundView:(id)a0;
- (id)unavailableString;
- (void).cxx_destruct;
- (id)userModel;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)menuItems;
- (BOOL)contentIsAvailable;
- (BOOL)shouldShowPlayIcon;

@end
