@class NSString, NSArray, NSMutableArray;
@protocol ContactProfileRecommendSelectViewDelegate;

@interface ContactProfileRecommendSelectView : MMUIView {
    NSArray *m_arrRecommendText;
    NSMutableArray *m_arrRecommendButtons;
    unsigned int m_recommendSelectType;
    BOOL m_hadReportExp;
}

@property (weak, nonatomic) id<ContactProfileRecommendSelectViewDelegate> delegate;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *nsbuttonHint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initData;
- (void)updateViewWithArrRecommendText:(id)a0 recommendSelectType:(unsigned int)a1;
- (double)getBottonBuffer;
- (id)addButton:(id)a0;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (unsigned int)getRecommendIndex:(id)a0;
- (void)buttonClicked:(id)a0;
- (void)reportExp;
- (id)getDicReportParamsWithRecommendInfo:(id)a0;
- (void).cxx_destruct;

@end
