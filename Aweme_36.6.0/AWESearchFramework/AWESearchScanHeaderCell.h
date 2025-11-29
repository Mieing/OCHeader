@class UILabel, NSString;
@protocol AWEModernFeedCellContext;

@interface AWESearchScanHeaderCell : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
