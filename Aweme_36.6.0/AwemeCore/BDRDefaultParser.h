@class BDReaderModel, BDReaderDefaultComposer, NSString;

@interface BDRDefaultParser : NSObject <BDReaderParser>

@property (weak, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDReaderDefaultComposer *composer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseBookInfoWithBookId:(id)a0 completion:(id /* block */)a1 append:(id /* block */)a2;
- (void)parseChapterContentWithBookInfo:(id)a0 chapterInfo:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)parseAttributedStringWithBookInfo:(id)a0 chapterInfo:(id)a1 chapterContent:(id)a2 process:(id)a3 completion:(id /* block */)a4;
- (id)initWithReaderModel:(id)a0;
- (void).cxx_destruct;

@end
