@class NSString, NSArray, NSData, WNContentStorage, WNHTMLTagNode, RTEHTMLParser;
@protocol WNContentStorageBuilderDelegate;

@interface WNContentStorageBuilder : MMObject <RTEHTMLParserDelegate, RTEHTMLParserDataSource> {
    NSData *m_htmlData;
    NSArray *m_favDataList;
    WNContentStorage *m_tmpStorage;
    WNHTMLTagNode *m_rootTag;
    WNHTMLTagNode *m_currentTag;
    RTEHTMLParser *m_parser;
    BOOL m_bInList;
    BOOL m_bLastInList;
    const char *m_remainContent;
}

@property (weak, nonatomic) id<WNContentStorageBuilderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHTMLData:(id)a0 favDataList:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)startGenerateContentStorage;
- (void)stopGenerateContentStorage;
- (id)getRemianContent;
- (BOOL)bInList;
- (void)parserDidStartDocument:(id)a0;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 attributes:(id)a2;
- (void)parser:(id)a0 didEndElement:(id)a1;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)parserCustomElementLoopupTable:(id)a0;
- (void)applyAttributes:(id)a0 toTag:(id)a1;
- (void)applyCSSStyle:(id)a0 toTag:(id)a1;
- (BOOL)isBlockTag:(id)a0;
- (void)tryOutputContent;
- (void).cxx_destruct;

@end
