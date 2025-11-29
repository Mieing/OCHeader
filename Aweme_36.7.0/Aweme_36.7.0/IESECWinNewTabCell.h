@class IESECWinTabObject, NSString, UIView, IESECWinSmileCurvedView, IESECSlidingTabbarView;

@interface IESECWinNewTabCell : UICollectionViewCell <IESECSlidingTabbarDelegate, IESECWinTabCellProtocol> {
    IESECWinTabObject *_object;
}

@property (retain, nonatomic) UIView *bottomSplitLine;
@property (retain, nonatomic) IESECWinSmileCurvedView *curvedView;
@property (nonatomic) double lastRatio;
@property (nonatomic) long long pointCount;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long lastIndex;
@property (nonatomic) BOOL startLeftToRightAppear;
@property (nonatomic) BOOL startRightToLeftAppear;
@property (nonatomic) BOOL switchFromTapIndex;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECSlidingTabbarView *tabBarView;
@property (retain, nonatomic) UIView *backView;
@property (copy, nonatomic) id /* block */ selectTabBlock;

- (void)bindObject:(id)a0;
- (void)customIndicatorAnimation:(id)a0 ratio:(double)a1 selectButton:(id)a2 nextButton:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customIndicatorFrameInTabButton:(id)a0;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)tabbarTappedAtIndex:(unsigned long long)a0 button:(id)a1;
- (void)customSetSelectIndicatorFrameWithButton:(id)a0 index:(unsigned long long)a1;
- (void)setupTabBarContent;
- (void)updateTabbarWithTabs:(id)a0;
- (long long)indexOfSelectTab:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
