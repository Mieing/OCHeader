@class NSString, UILabel, IESLiveVSGiftSectionChargeItem, UIView;

@interface IESLiveVSGiftSectionChargeCell : UIView <IESLiveVSGiftSectionCell>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly, nonatomic) IESLiveVSGiftSectionChargeItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_tapAction;
- (void)p_updateContent;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
