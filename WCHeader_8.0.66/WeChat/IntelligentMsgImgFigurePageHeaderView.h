@class IntelligentMsgImgFigurePageView, NSString, NSArray, MMUILabel;
@protocol IntelligentMsgImgFigurePageHeaderViewDelegate;

@interface IntelligentMsgImgFigurePageHeaderView : MMUIView <IntelligentMsgImgFigurePageViewDelegate> {
    MMUILabel *m_titleLabel;
    IntelligentMsgImgFigurePageView *m_figurePageView;
    NSArray *m_arrFaceClusterMessageItem;
}

@property (weak, nonatomic) id<IntelligentMsgImgFigurePageHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)layoutView;
- (void)layoutTitleLabel;
- (void)layoutFigurePageView;
- (void)initFigurePageView;
- (void)layoutSubviews;
- (double)calculationHeight;
- (void)updateMsgImgFigurePageHeaderView:(id)a0;
- (void)onTransitionToNewSize;
- (void)onMsgFigureImgClicked:(id)a0;
- (void).cxx_destruct;

@end
