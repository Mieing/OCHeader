@class AWEKnowledgeStateCardToken, NSMutableDictionary;
@protocol AWEKnowledgeStateResultHandlerProtocol, AWEKnowledgeStateCardInfoDelegate;

@interface AWEKnowledgeStateCardInfo : NSObject

@property (retain, nonatomic) AWEKnowledgeStateCardToken *cardToken;
@property (retain, nonatomic) NSMutableDictionary *stateInfo;
@property (retain, nonatomic) id<AWEKnowledgeStateResultHandlerProtocol> resultHandler;
@property (weak, nonatomic) id<AWEKnowledgeStateCardInfoDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *quickStartDic;

- (void).cxx_destruct;

@end
