@class BDReaderModel, NSString, NSMutableString, BDReaderParagraphInfo, BDReaderChapterInfo, NSMutableArray, BDRHTMLParser;

@interface BDReaderDefaultComposer : BDReaderComposer <BDRHTMLParserDelegate>

@property (retain, nonatomic) BDRHTMLParser *dtParser;
@property (retain, nonatomic) NSMutableArray *paragraphInfos;
@property (retain, nonatomic) NSMutableString *valueString;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) BDReaderParagraphInfo *paragraphInfo;
@property (retain, nonatomic) BDReaderParagraphInfo *imgParagraphInfo;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parserChapterInfo:(id)a0 chapterContent:(id)a1 readerModel:(id)a2 completion:(id /* block */)a3;
- (void)parserContent:(id)a0 title:(id)a1 readerModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 attributes:(id)a2;
- (void)parser:(id)a0 didEndElement:(id)a1;

@end
