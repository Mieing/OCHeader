@class NSString, AWENewPublishTableCell;

@interface AWEPostPageVideoReplyElement : AWEPostPageCellElement <AWEPostPageBubbleDelegate, AWEPublishVideoReplyPopupViewControllerDelegation>

@property (retain, nonatomic) AWENewPublishTableCell *videoReplyCell;
@property (nonatomic) BOOL isShowingVideoReplyPopupViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)showBubble;
- (id)bubbleIdentifier;
- (BOOL)bubbleShouldShow;
- (id)requiresFailureBubbleIdentifiers;
- (BOOL)p_shouldShowVideoReplyCell;
- (void)switchStateDidchange:(BOOL)a0;
- (void)publishVideoReplyPopupViewControllerWillDealloc;
- (void).cxx_destruct;
- (BOOL)isReply;
- (BOOL)isVisible;
- (void)viewDidLoad;
- (id)cell;
- (id)bubble;
- (void)didSelect;

@end
