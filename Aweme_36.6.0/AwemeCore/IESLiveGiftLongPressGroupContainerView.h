@class IESLiveFantasticGiftGroupSelectionListItem, NSArray;
@protocol IESLiveFantasticGiftGroupSelectionListViewDataSource;

@interface IESLiveGiftLongPressGroupContainerView : UIView

@property (nonatomic) long long lastSelectedIndex;
@property (retain, nonatomic) IESLiveFantasticGiftGroupSelectionListItem *item;
@property (retain, nonatomic) NSArray *buttons;
@property (weak, nonatomic) id<IESLiveFantasticGiftGroupSelectionListViewDataSource> dataSource;

- (void)jumpOut;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupContent;

@end
