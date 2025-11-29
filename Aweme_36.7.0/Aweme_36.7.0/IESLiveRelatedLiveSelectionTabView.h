@class NSArray, UIView, NSMutableArray, UIButton;

@interface IESLiveRelatedLiveSelectionTabView : UIView

@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) UIView *flagView;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) NSMutableArray *seletedButtonArray;
@property (nonatomic) BOOL useSmallFont;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ totalSelectionTabClick;

- (void)setupMultiTabView;
- (id)initWithPanelTabModels:(id)a0 showIcon:(BOOL)a1 useSmallFont:(BOOL)a2;
- (void)changeSelectToIndex:(long long)a0;
- (void)setupSubview:(BOOL)a0;
- (void)setupIconTabView;
- (id)createTabTagButtonWithTitle:(id)a0;
- (void)switchFlagTo:(id)a0;
- (void)flagButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)a0;

@end
