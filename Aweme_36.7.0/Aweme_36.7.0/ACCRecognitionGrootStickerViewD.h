@class UILabel, UIView;

@interface ACCRecognitionGrootStickerViewD : ACCRecognitionGrootStickerView {
    id /* block */ _coordinateDidChange;
    double _currentScale;
}

@property (retain, nonatomic) UILabel *speciesNameLabel;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIView *outsideCircleView;
@property (retain, nonatomic) UIView *contentView;

- (void)configWithModel:(id)a0;
- (id /* block */)coordinateDidChange;
- (void)setCoordinateDidChange:(id /* block */)a0;
- (void)contentDidUpdateToScale:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (double)currentScale;
- (void)setCurrentScale:(double)a0;
- (void)setupUI;
- (void)updateFrame;

@end
