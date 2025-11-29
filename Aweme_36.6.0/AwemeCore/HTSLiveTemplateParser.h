@class IESLiveRichTextPieceParser, HTSLivePieceParser;

@interface HTSLiveTemplateParser : NSObject

@property (retain, nonatomic) HTSLivePieceParser *pieceParser;
@property (retain, nonatomic) IESLiveRichTextPieceParser *richTextPieceParser;

+ (id)parseTemplate:(id)a0;

- (id)initWithDIContext:(id)a0;
- (id)stackImageItem:(id)a0 overlapSpace:(double)a1;
- (id)parseDisplayText:(id)a0 templateString:(id)a1 configuration:(id)a2;
- (id)parseEnableSchemaInfoDisplayText:(id)a0 templateString:(id)a1 configuration:(id)a2;
- (id)parseCombinedText:(id)a0 configuration:(id)a1;
- (id)parsePiecesFromDisplayText:(id)a0 templateString:(id)a1 configuration:(id)a2;
- (void).cxx_destruct;

@end
