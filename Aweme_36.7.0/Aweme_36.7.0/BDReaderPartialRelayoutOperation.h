@class NSString, NSArray, BDReaderChapterInfo, BDReaderModel, BDParserManager, BDLayoutChapterData, NSMutableArray, BDReaderChapterContent;
@protocol BDReaderLayoutOperationDelegate;

@interface BDReaderPartialRelayoutOperation : NSObject <BDReaderLayoutOperationProtocol, BDRPriorityQueueObjectProtocol>

@property (copy, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (retain, nonatomic) BDReaderChapterContent *chapterContent;
@property (retain, nonatomic) BDLayoutChapterData *chapterData;
@property (nonatomic) unsigned long long pageIndex;
@property (readonly, copy, nonatomic) NSArray *completions;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id<BDReaderLayoutOperationDelegate> delegate;
@property (weak, nonatomic) BDParserManager *parserMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)relayoutChapterDataWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterData:(id)a2 pageIndex:(unsigned long long)a3;
- (id)subAttributedStringForLayout:(id)a0 readerModel:(id)a1;
- (id)relayoutPageDataArr:(id)a0 readerModel:(id)a1 chapterInfo:(id)a2 chapterData:(id)a3;
- (id)getPageDataArrWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterData:(id)a2 attrStr:(id)a3 startLocation:(unsigned long long)a4;
- (void)addCompletionBlocks:(id)a0;
- (void)asyncExecute:(id /* block */)a0;
- (id)initWithReaderModel:(id)a0 parserManager:(id)a1 chapterInfo:(id)a2 chapterData:(id)a3 pageIndex:(unsigned long long)a4 priority:(unsigned long long)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)main;
- (void)cancel;

@end
