@class BDParserManager, BDReaderChapterInfo, BDReaderChapterContent, NSArray, NSString, BDReaderModel, NSMutableArray;
@protocol BDReaderLayoutOperationDelegate;

@interface BDReaderLayoutOperation : NSObject <BDReaderLayoutOperationProtocol, BDRPriorityQueueObjectProtocol>

@property (copy, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (retain, nonatomic) BDReaderChapterContent *chapterContent;
@property (readonly, copy, nonatomic) NSArray *completions;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id<BDReaderLayoutOperationDelegate> delegate;
@property (weak, nonatomic) BDParserManager *parserMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReaderModel:(id)a0 parserManager:(id)a1 chapterInfo:(id)a2 chapterContent:(id)a3 priority:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)getLayoutChapterDataWithReaderModel:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2;
- (void)transferContent:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 attributedString:(id)a3;
- (void)appendAttachment:(id)a0 chapterInfo:(id)a1 attributedString:(id)a2;
- (id)layoutProcess:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 readerModel:(id)a3;
- (id)subAttributedStringForLayout:(id)a0 readerModel:(id)a1;
- (void)addCompletionBlocks:(id)a0;
- (void)asyncExecute:(id /* block */)a0;
- (void).cxx_destruct;
- (id)main;
- (void)cancel;

@end
