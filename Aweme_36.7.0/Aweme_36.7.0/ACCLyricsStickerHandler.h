@interface ACCLyricsStickerHandler : ACCStickerHandler

@property (copy, nonatomic) id /* block */ onExpressLyricsSticker;

- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0;
- (void)expressSticker:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
