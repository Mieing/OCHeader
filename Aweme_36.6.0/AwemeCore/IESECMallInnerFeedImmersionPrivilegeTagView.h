@class UIColor, CAShapeLayer, UIImageView, UILabel, UIView, IESECECTagView;

@interface IESECMallInnerFeedImmersionPrivilegeTagView : UIView

@property (retain, nonatomic) UILabel *tagHeader;
@property (retain, nonatomic) UILabel *tagContent;
@property (retain, nonatomic) UIView *dashlineView;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) IESECECTagView *tagView;
@property (retain, nonatomic) UIColor *lightRedColor;
@property (retain, nonatomic) UIColor *redColor;
@property (retain, nonatomic) UIColor *lightGoldenColor;
@property (retain, nonatomic) UIColor *goldenColor;
@property (nonatomic) struct CGSize { double width; double height; } tagSize;

- (void)updateWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
