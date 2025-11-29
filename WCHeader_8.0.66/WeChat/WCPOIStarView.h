@class NSMutableArray;

@interface WCPOIStarView : MMUIView {
    NSMutableArray *m_arrPOIStars;
}

@property (nonatomic) unsigned int poiScore;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onClickStar:(id)a0;
- (void)deSelectStar:(id)a0;
- (void).cxx_destruct;

@end
