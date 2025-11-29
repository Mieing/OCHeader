@class CMDocument, CMNode;
@protocol CMParserDelegate;

@interface CMParser : NSObject {
    struct { unsigned char didStartDocument : 1; unsigned char didEndDocument : 1; unsigned char didAbort : 1; unsigned char foundText : 1; unsigned char foundHRule : 1; unsigned char didStartHeader : 1; unsigned char didEndHeader : 1; unsigned char didStartParagraph : 1; unsigned char didEndParagraph : 1; unsigned char didStartEmphasis : 1; unsigned char didEndEmphasis : 1; unsigned char didStartStrong : 1; unsigned char didEndStrong : 1; unsigned char didStartLink : 1; unsigned char didEndLink : 1; unsigned char didStartImage : 1; unsigned char didEndImage : 1; unsigned char foundHTML : 1; unsigned char foundInlineHTML : 1; unsigned char foundCodeBlock : 1; unsigned char foundInlineCode : 1; unsigned char foundSoftBreak : 1; unsigned char foundLineBreak : 1; unsigned char didStartBlockQuote : 1; unsigned char didEndBlockQuote : 1; unsigned char didStartUnorderedList : 1; unsigned char didEndUnorderedList : 1; unsigned char didStartOrderedList : 1; unsigned char didEndOrderedList : 1; unsigned char didStartListItem : 1; unsigned char didEndListItem : 1; } _delegateFlags;
}

@property (retain) CMNode *currentNode;
@property (weak, nonatomic) id<CMParserDelegate> delegate;
@property _Atomic int parsing;
@property (readonly, nonatomic) CMDocument *document;

- (id)initWithDocument:(id)a0 delegate:(id)a1;
- (void)handleNode:(id)a0 event:(long long)a1;
- (void)parse;
- (void).cxx_destruct;
- (void)abortParsing;

@end
