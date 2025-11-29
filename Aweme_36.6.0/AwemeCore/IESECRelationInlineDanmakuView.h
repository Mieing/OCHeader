@class NSMutableArray, CADisplayLink;

@interface IESECRelationInlineDanmakuView : UIView {
    NSMutableArray *_dataArray;
    NSMutableArray *_items;
    CADisplayLink *_displayLink;
    long long _dataCountLimit;
    double _topEdge;
    double _leftEdge;
    double _distance;
    long long _preferredFramesPerSecond;
}

- (void)configItem:(id)a0 reAdd:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataArray:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)displayLinkAction;
- (void)setupUI;

@end
