@class UILabel, NSString, UIView;
@protocol WAMainFrameTaskBarSectionBaseViewReportDelegate;

@interface WAMainFrameTaskBarSectionBaseView : UICollectionViewCell <MMMenuControllerExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *topArea;
@property (retain, nonatomic) UIView *cellMask;
@property (retain, nonatomic) NSString *sectionId;
@property (weak, nonatomic) id<WAMainFrameTaskBarSectionBaseViewReportDelegate> reportDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFont;
+ (long long)topAreaHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)title;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initView;
- (void)reload;
- (void)addCellMask:(id)a0;
- (BOOL)supportAddToMinimize;
- (void)onMenuControllerDidHide;
- (void)onClick:(id)a0 weappData:(id)a1 pos:(long long)a2;
- (void)onClick:(id)a0 pos:(long long)a1 isMyWeApp:(BOOL)a2;
- (void)deleteItem:(id)a0 weappData:(id)a1 pos:(long long)a2 isMyWeApp:(BOOL)a3;
- (void)willDisplayItem:(id)a0 weappData:(id)a1 position:(long long)a2 isMyWeApp:(BOOL)a3;
- (void).cxx_destruct;

@end
