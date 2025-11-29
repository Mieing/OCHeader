@class NSMutableArray;

@interface IESLivePlaybackDanmakuBaseContentView : UIView

@property (retain, nonatomic) NSMutableArray *subContentViews;
@property (nonatomic) double contentViewWidth;

- (void)stopAnimated;
- (void)setupBaseContentViewWithNode:(id)a0 strokeColor:(id)a1 strokeWidth:(double)a2;
- (void)startAnimated;
- (void).cxx_destruct;
- (void)setTextColor:(id)a0;
- (void)resetView;

@end
