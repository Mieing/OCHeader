@class UIImageView, NSString;

@interface AWEDCFeedCellImageElementGenreResourceIconView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double iconWidthHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconWidthHeight:(double)a0;
- (void)configIconWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrame;

@end
