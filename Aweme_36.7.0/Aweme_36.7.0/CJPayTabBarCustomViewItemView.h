@class CJPayTabBarCustomViewItem, NSString, UIView;
@protocol CJPayTabBarItemViewDelegate;

@interface CJPayTabBarCustomViewItemView : UIView <CJPayTabBarItemViewProtocol>

@property (retain, nonatomic) CJPayTabBarCustomViewItem *item;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *defaultView;
@property (retain, nonatomic) UIView *selectedView;
@property (nonatomic) double itemWidth;
@property (nonatomic) BOOL autoFitWidth;
@property (nonatomic) double tabBarHeight;
@property (weak, nonatomic) id<CJPayTabBarItemViewDelegate> delegate;
@property (nonatomic) long long type;
@property (nonatomic) double selectedIndicatorWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
