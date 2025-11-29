@class BDRDefaultParser, NSObject;
@protocol OS_dispatch_queue;

@interface BDParserManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parserQueue;
@property (retain, nonatomic) BDRDefaultParser *defaultParser;

- (id)parserWithReaderModel:(id)a0;
- (void)parserBookInfo:(id)a0 completion:(id /* block */)a1 append:(id /* block */)a2;
- (void)parserChapterContent:(id)a0 chapterInfo:(id)a1 loadInfo:(id)a2 completion:(id /* block */)a3;
- (void)parserAttributedString:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 process:(id)a3 completion:(id /* block */)a4;
- (id)initWithReaderModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
