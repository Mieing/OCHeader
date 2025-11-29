@class NSString, UIImageView, UILabel, UIView;

@interface AWEIMTaskPlatformDetailCardDetailActivityCellHeaderView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *stateBackGroundView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *cardTitleLabel;
@property (retain, nonatomic) UILabel *cardTagLabel;
@property (retain, nonatomic) UILabel *cardDescription;
@property (retain, nonatomic) UIImageView *cardContentImageView;
@property (retain, nonatomic) UIView *unreadDotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)textForStatus:(unsigned long long)a0;
- (id)attrWithHighlightStr:(id)a0 fulltext:(id)a1;
- (id)textColorForStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
