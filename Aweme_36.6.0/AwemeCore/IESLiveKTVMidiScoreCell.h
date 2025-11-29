@class NSString, NSMutableArray, UIView;

@interface IESLiveKTVMidiScoreCell : UICollectionViewCell

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) NSMutableArray *layers;
@property (copy, nonatomic) NSString *startColorString;
@property (copy, nonatomic) NSString *endColorString;
@property (nonatomic) BOOL enableDecorate;

- (id)colorWithPositionX:(double)a0;
- (void)showMuiscPicthLine:(BOOL)a0 position:(double)a1;
- (void)drawRightLineAtPosition:(double)a0 width:(double)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
