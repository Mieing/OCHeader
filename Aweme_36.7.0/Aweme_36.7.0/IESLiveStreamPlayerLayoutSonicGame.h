@class NSNumber;

@interface IESLiveStreamPlayerLayoutSonicGame : IESLiveStreamPlayerLayoutBase

@property (retain, nonatomic) NSNumber *gameRatio;
@property (nonatomic) BOOL isInMGCast;

- (BOOL)layoutWithMetaInfo:(id)a0;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (BOOL)handleInteractPlayDict:(id)a0;
- (BOOL)handleTimorDict:(id)a0;
- (void)handleMGPreviewsType:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
