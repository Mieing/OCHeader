@class AWEIMMessage, AWEIMMessageConversation, AWEIMChapterShareBubbleViewModel;

@interface AWEIMChapterShareMessageViewModel : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMChapterShareBubbleViewModel *bubbleViewModel;
@property (nonatomic) unsigned long long chapterAvailable;
@property (nonatomic) BOOL awemeAvailable;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })p_originCoverSize;
+ (struct CGSize { double x0; double x1; })quoteImageSize:(id)a0;

- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (void)updateWithMessage:(id)a0 conversation:(id)a1;
- (void)p_updateChapterShareModelWithMessage:(id)a0;
- (void)p_updateMessageSize;
- (void).cxx_destruct;

@end
