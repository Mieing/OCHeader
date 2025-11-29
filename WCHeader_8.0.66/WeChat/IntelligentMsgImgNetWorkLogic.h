@protocol IntelligentMsgImgNetWorkLogicDelegate;

@interface IntelligentMsgImgNetWorkLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<IntelligentMsgImgNetWorkLogicDelegate> m_delegate;

- (void)getSimilarWordsWithQuery:(id)a0;
- (void)onGetSimilarWordsWithQuery:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
