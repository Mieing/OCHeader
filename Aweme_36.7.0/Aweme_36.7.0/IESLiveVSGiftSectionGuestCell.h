@class NSString, IESLiveVSGiftSectionGuestItem, UILabel, IESLiveGradientView, UIView;

@interface IESLiveVSGiftSectionGuestCell : UIView <IESLiveVSGiftSectionCell>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveGradientView *divider;
@property (readonly, nonatomic) IESLiveVSGiftSectionGuestItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadData;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
