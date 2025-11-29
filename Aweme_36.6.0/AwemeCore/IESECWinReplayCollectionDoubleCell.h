@class NSString, IESECWinReplayCollectionObject, IESECLLView;
@protocol IESECWinReplayCollectionCellDelegate;

@interface IESECWinReplayCollectionDoubleCell : UICollectionViewCell <IESECWinReplayCollectionCellProtocol, IESECWinReplayCollectionCardViewModelDelegate> {
    IESECWinReplayCollectionObject *_object;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (weak, nonatomic) id<IESECWinReplayCollectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)a0;

- (id)playerContainer;
- (void)stopPlay;
- (void)startPlay;
- (id)playItem;
- (void)setHasPlayed:(BOOL)a0;
- (void)bindObject:(id)a0;
- (void)pausePlay;
- (id)danmakuDataSource;
- (BOOL)isVoiceControllable;
- (double)maxPlayDuration;
- (void)updatePlayableDurationAndCurrentTimeWithDuration:(double)a0 currentTime:(double)a1;
- (id)getGoodsObject;
- (void)clickGoodsVideoCoverWithModel:(id)a0;
- (void)clickGoodsCoverWithModel:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isSingleCell;
- (BOOL)hasPlayed;

@end
