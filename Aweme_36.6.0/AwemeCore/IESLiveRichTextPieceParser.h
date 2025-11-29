@class HTSLivePieceParser;

@interface IESLiveRichTextPieceParser : NSObject

@property (retain, nonatomic) HTSLivePieceParser *pieceParser;

- (id)initWithDIContext:(id)a0;
- (id)handleStringPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleUserPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleGiftPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleHeartPiece:(id)a0 configuration:(id)a1;
- (id)handlePatternPiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (id)handleImagePiece:(id)a0 defaultFormat:(id)a1 configuration:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
