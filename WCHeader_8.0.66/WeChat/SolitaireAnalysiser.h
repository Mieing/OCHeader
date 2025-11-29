@class NSString, NSMutableDictionary, NSOperationQueue, SolitaireOperation;
@protocol SolitaireAnalysiserDelegate;

@interface SolitaireAnalysiser : NSObject

@property (retain, nonatomic) NSString *nsHighQualityChatName;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SolitaireOperation *analysisOperation;
@property (retain, nonatomic) NSOperationQueue *analysisQueue;
@property (retain, nonatomic) NSMutableDictionary *dicChatNameOperation;
@property (weak, nonatomic) id<SolitaireAnalysiserDelegate> delegate;

- (void)onAddNewTextMsg:(id)a0;
- (void)addAnalysisOperationWithChatName:(id)a0;
- (void)startAnalysisWithChatName:(id)a0;
- (void)updateFoldInfoWithMsgWrap:(id)a0 Info:(id)a1;
- (void)analysisSolitaireWithContent:(id)a0 FinishBlock:(id /* block */)a1;
- (id)getSolitaireWithCallKeywordRegex:(id)a0 ChatName:(id)a1;
- (void)onActiveUsrName:(id)a0;
- (void).cxx_destruct;

@end
