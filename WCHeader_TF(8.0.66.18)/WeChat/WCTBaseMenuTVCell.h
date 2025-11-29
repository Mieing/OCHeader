@class NSString, WCTBaseMenuView;

@interface WCTBaseMenuTVCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>

@property (readonly, nonatomic) WCTBaseMenuView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (void)setViewEventAction:(id /* block */)a0;
- (void)setViewDelegate:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
