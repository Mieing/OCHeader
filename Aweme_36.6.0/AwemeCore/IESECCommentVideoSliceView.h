@class IESECVideoPlayerView, IESECHeadVideoModel;

@interface IESECCommentVideoSliceView : IESECSliceXViewElementView

@property (retain, nonatomic) IESECVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) IESECHeadVideoModel *videoModel;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)updateMediaCellWithVideoModel:(id)a0;
- (id)updatePlayerConfig;
- (void).cxx_destruct;

@end
