@class UILabel, IESGCPDetailFilterConfig, NSString;

@interface IESGCPDetailFilterViewCell : UICollectionViewCell <IESGCPViewExposedAble>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESGCPDetailFilterConfig *filterConfig;
@property (copy, nonatomic) id /* block */ exposedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewExposed;
- (void)configWithFilterConfig:(id)a0;
- (void)labelStatusChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;
- (void)updateWithText:(id)a0;

@end
