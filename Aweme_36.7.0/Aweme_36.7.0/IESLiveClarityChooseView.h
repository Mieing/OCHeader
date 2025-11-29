@class NSMutableArray;
@protocol IESLiveClarityChooseViewDelegate;

@interface IESLiveClarityChooseView : UIView

@property (nonatomic) unsigned long long arrayDataType;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) BOOL showFPSTagStyle;
@property (nonatomic) BOOL showRectCorner;
@property (retain, nonatomic) NSMutableArray *currentIndexs;
@property (retain, nonatomic) NSMutableArray *disableIndexs;
@property (retain, nonatomic) NSMutableArray *clarityButtonViews;
@property (nonatomic) unsigned long long highResolutionFPSThresh;
@property (weak) id<IESLiveClarityChooseViewDelegate> delegate;

- (id)buildTitleLabel:(id)a0;
- (void)cancelButtonClick:(id)a0;
- (id)initWithQualities:(id)a0 currentIndexs:(id)a1 disableIndexs:(id)a2 showFPSTagStyle:(BOOL)a3;
- (id)initWithItems:(id)a0 currentIndexs:(id)a1 disableIndexs:(id)a2 showRectCorner:(BOOL)a3;
- (void)updateWithItems:(id)a0 currentIndexs:(id)a1 disableIndexs:(id)a2;
- (void)_updateBtnsDisplay;
- (double)_buildButtonsWithViewWidth:(double)a0 curY:(double)a1;
- (BOOL)_shouldAddHighResolutionTag:(long long)a0;
- (void)_configBtnSelectionAndDisableType:(id)a0 idx:(long long)a1 isCurrentSelected:(BOOL)a2;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
