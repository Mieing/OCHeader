@class NSString, UIView;
@protocol IESIMStickerHorizontalSelectionView;

@interface IESIMMessageListRecommendGiphyComponent : AWEIMComponentBase <IESIMMessageListRecommendGiphyInterface, AWEIMComponentLazyCreate>

@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) UIView<IESIMStickerHorizontalSelectionView> *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (id)networkNodeWithTimeout:(double)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)requestGiphyWithTextMessage:(id)a0 requestSource:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)requestEmojiWithAttributedString:(id)a0 requestSource:(id)a1 completion:(id /* block */)a2;
- (void)requestSearchResultObjectWithTextMessage:(id)a0 requestSource:(id)a1 completion:(id /* block */)a2;
- (void)p_requestGiphyWithInput:(id)a0 requestSource:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)p_requestGiphyWithInput:(id)a0 requestSource:(id)a1 completion:(id /* block */)a2;
- (id)p_createReqContextWithSearchKey:(id)a0 requestSource:(id)a1;
- (id)p_getCacheResultOfText:(id)a0 requestSource:(id)a1;
- (void)p_storeCacheResult:(id)a0 ofText:(id)a1 requestSource:(id)a2;
- (id)p_memoryCache;
- (void).cxx_destruct;

@end
