@class NSString, UILabel, UIView, UIButton;

@interface ACCMusicSelectTabView : UIView <ACCSelectMusicTabProtocol>

@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIButton *hotmusicButton;
@property (retain, nonatomic) UILabel *hotmusicLabel;
@property (retain, nonatomic) UIView *firstVerticalLineView;
@property (retain, nonatomic) UIButton *collectButton;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UIView *secondVerticalLineView;
@property (retain, nonatomic) UIButton *localAudioButton;
@property (retain, nonatomic) UILabel *localAudioLabel;
@property (copy, nonatomic) id /* block */ tabCompletion;
@property (copy, nonatomic) id /* block */ tabShouldSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeConstraints;
- (unsigned long long)selectedTabType;
- (void)p_selectTabImplAt:(unsigned long long)a0;
- (void)hotmusicButtonClicked:(id)a0;
- (void)collectButtonClicked:(id)a0;
- (void)localAudioButtonClicked:(id)a0;
- (BOOL)shouldSelectTabAtIndex:(unsigned long long)a0;
- (void)commitSelectedIndexChange:(unsigned long long)a0;
- (void)showBottomLineView:(BOOL)a0;
- (void)forceSwitchSelectedType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
