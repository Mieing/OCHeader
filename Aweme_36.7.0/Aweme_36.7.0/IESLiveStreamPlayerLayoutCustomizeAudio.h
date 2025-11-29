@interface IESLiveStreamPlayerLayoutCustomizeAudio : IESLiveStreamPlayerLayoutBase

@property (nonatomic) BOOL multiRoomUseCenterRight;

- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)rawPlayer;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
