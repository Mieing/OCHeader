@class NSArray, NSMutableArray, NSString;

@interface IESLiveRichTextLabel : UILabel

@property (retain, nonatomic) NSArray *currentPieces;
@property (nonatomic) BOOL enableAnimatedImage;
@property (nonatomic) BOOL hasAnimatedPiece;
@property (retain, nonatomic) NSMutableArray *completePieces;
@property (retain, nonatomic) NSString *currentTag;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (copy, nonatomic) id /* block */ textUpdateBlock;

- (void)setPieces:(id)a0;
- (void)setPieces:(id)a0 completion:(id /* block */)a1;
- (void)updatePiecesWithDownloadImage:(BOOL)a0 tag:(id)a1;
- (BOOL)isAllPiecesLoaded;
- (id)imageFromCache:(id)a0;
- (void)downloadImage:(id)a0 isAnimated:(BOOL)a1 tag:(id)a2;
- (id)attachmentFromAnimatedImage:(id)a0 liveImage:(id)a1 font:(id)a2;
- (id)attachmentFromImage:(id)a0 liveImage:(id)a1 font:(id)a2;
- (void)updateRichTextWithImage:(id)a0 isAnimated:(BOOL)a1 tag:(id)a2;
- (void)setImageWidth:(double)a0 height:(double)a1;
- (void).cxx_destruct;
- (void)setAttributedText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
