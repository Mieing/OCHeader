@class WCTBaseSettingView, NSString;

@interface WCTBaseSettingCVCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (readonly, nonatomic) WCTBaseSettingView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (void)setViewEventAction:(id /* block */)a0;
- (void)setViewDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
