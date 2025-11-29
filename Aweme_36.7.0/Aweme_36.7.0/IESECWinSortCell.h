@class IESECButton, IESECWinSortObject, NSString, UIView, IESECSlidingTabbarView, UIButton;
@protocol IESECWinSortCellProtocol;

@interface IESECWinSortCell : UICollectionViewCell <IESECSlidingTabbarLayoutDelegate, IESECSlidingTabbarDelegate>

@property (nonatomic) unsigned long long layout;
@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) IESECButton *filterCheckButton;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) IESECWinSortObject *object;
@property (weak, nonatomic) id<IESECWinSortCellProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)switchButtonTapped;
- (void)bindObject:(id)a0;
- (double)slidingTabbarView:(id)a0 widthForSegment:(id)a1 atIndex:(unsigned long long)a2;
- (void)tabbarTappedAtIndex:(unsigned long long)a0 button:(id)a1;
- (void)updateSwitchButtonWithProductTabStyle:(unsigned long long)a0;
- (double)getFilterButtonWidth:(id)a0;
- (void)filterCheckButtonTapped;
- (void)configTabLayout:(unsigned long long)a0;
- (void)configFilterStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setUpConstraints;

@end
