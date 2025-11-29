@class CAGradientLayer, NSString, CAShapeLayer, UILabel;

@interface IESECRelationDanmakuItem : UIView {
    NSString *_comment;
    long long _number;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *xLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) BOOL hasComputed;

- (void)setupLayer;
- (id)initWithComment:(id)a0 number:(long long)a1;
- (void).cxx_destruct;
- (void)setupViews;

@end
