@class UIColor, NSString;

@interface GXProgressNode : GXViewNode {
    double _progress;
    BOOL _isNeedReload;
}

@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *trailColor;
@property (retain, nonatomic) NSString *progressType;
@property (nonatomic) BOOL animated;

- (void)bindData:(id)a0;
- (void)setupNormalBackground:(id)a0;
- (void)updateNormalStyle:(id)a0 isMark:(BOOL)a1;
- (void)configureViewInfo:(id)a0;
- (id)creatView;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end
