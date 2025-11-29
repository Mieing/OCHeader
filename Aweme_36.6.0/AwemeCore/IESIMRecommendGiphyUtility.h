@class NSString;

@interface IESIMRecommendGiphyUtility : NSObject <IESIMRecommendGiphyUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canRecommendGiphyWithContext:(id)a0;
- (BOOL)typeValidToRecommendGiphyWithTextMessage:(id)a0;
- (id)searchTextWithTextMessage:(id)a0;
- (id)searchTextWithAttributedString:(id)a0;
- (BOOL)shouldRequestEmoticonListOfMessage:(id)a0;
- (id)cachedRecommendResultOfMessage:(id)a0;
- (void)storeResult:(id)a0 inMessage:(id)a1 completion:(id /* block */)a2;
- (BOOL)enableLongPressMessage:(id)a0;
- (BOOL)p_basicCheckEnableRecommend;
- (id)p_plainTextWithoutMentionOfMessage:(id)a0;

@end
