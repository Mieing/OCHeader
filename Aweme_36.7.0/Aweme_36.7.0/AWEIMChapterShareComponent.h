@class NSString;

@interface AWEIMChapterShareComponent : AWEIMFlexComponent <AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver, AWEIMMessageContentInterface>

@property (nonatomic) BOOL awemeAvailable;
@property (nonatomic) unsigned long long chapterStatus;
@property (copy, nonatomic) NSString *chapterDesc;
@property (copy, nonatomic) NSString *chapterDetail;
@property (copy, nonatomic) NSString *awemeTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_updateProps;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (id)chapterShareMessage;
- (void)trackChapterMessageShow;
- (id)makeFeedCardProps;
- (id)makeContentAttrStr;
- (struct CGSize { double x0; double x1; })calculateBubbleSize:(id)a0;
- (id)makeTopAttrStrWithMaxTextWidth:(double)a0;
- (void)onClickSharedChapter;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
