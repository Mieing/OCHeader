@interface BDReaderComposer : NSObject

@property (copy, nonatomic) id /* block */ appendParaBlock;
@property (copy, nonatomic) id /* block */ insertParaBlock;
@property (copy, nonatomic) id /* block */ layoutBindParaBlock;
@property (copy, nonatomic) id /* block */ handleParaBlock;
@property (copy, nonatomic) id /* block */ cancelComposeBlock;

- (void)parserChapterInfo:(id)a0 chapterContent:(id)a1 readerModel:(id)a2 completion:(id /* block */)a3;
- (id)attachmentStringWithMargin:(double)a0 config:(id)a1;
- (id)getTitleAttributeStrWithPara:(id)a0 readerModel:(id)a1 chapterInfo:(id)a2;
- (id)getAttributeStrWithPara:(id)a0 readerModel:(id)a1 chapterInfo:(id)a2;
- (id)attachmentStringWithAttachment:(id)a0 configData:(id)a1;
- (void)beginCompose;
- (void)endCompose;
- (void).cxx_destruct;

@end
