@class NSArray, NSString;
@protocol AWEIMConversationImageCacheComponentInterface;

@interface AWEIMGiphyContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) NSArray *imageUrls;
@property (weak, nonatomic) id<AWEIMConversationImageCacheComponentInterface> imageCache;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (BOOL)disableQuotedTextMatchToLittleEmoticon;
+ (void)coverDidTappedMessage:(id)a0 context:(id)a1 scene:(long long)a2;
+ (BOOL)coverDidTappedForGiphyMessage:(id)a0 context:(id)a1 scene:(long long)a2;

- (void)addForwardMsgResourceFromComponent;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_updateAccessibility:(id)a0;
- (void)cellEndDisplay:(unsigned long long)a0;
- (id)displayViewModel;
- (void)coverDidTappedForShanMengMessage;
- (BOOL)coverDidTappedForGiphyMessage;
- (void)p_refreshGiphyUI;
- (void)p_setupGiphyUI;
- (void)p_refreshRandomEmojiUI;
- (void)p_refreshPresenterProps;
- (void)p_precheckRandomInteractiveEmojiResult;
- (void).cxx_destruct;
- (id)displayMessage;

@end
