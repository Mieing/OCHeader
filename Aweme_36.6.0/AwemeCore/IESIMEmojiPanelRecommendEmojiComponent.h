@class IESIMGrowingTextView, NSString, IESIMEmojiPanelCustomEmojiSection;
@protocol IESIMMessageListRecommendGiphyInterface;

@interface IESIMEmojiPanelRecommendEmojiComponent : AWEIMComponentBase <IESIMEmojiPanelRecommendEmojiInterface, AWEIMEmoticonPanelEvent>

@property (weak, nonatomic) id<IESIMMessageListRecommendGiphyInterface> requestService;
@property (weak, nonatomic) IESIMGrowingTextView *textview;
@property (retain, nonatomic) IESIMEmojiPanelCustomEmojiSection *recEmojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)emoticonViewDidAppear;
- (id)recommendedEmojis;
- (void)p_reloadEmojiPageIfNeeded;
- (id)p_sectionTitle;
- (void).cxx_destruct;

@end
