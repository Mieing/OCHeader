@class UIImageView, UILabel, UIView;

@interface MMLiveGamePrepareOptionCell : WCTableViewNormalCellManager

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *optionLabel;
@property (retain, nonatomic) UILabel *selectLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)initWith:(double)a0 target:(id)a1 selector:(SEL)a2 title:(id)a3 rightText:(id)a4 icon:(id)a5;
- (void)updateLabelWithSelectedJoinTeamMode:(unsigned int)a0 labelText:(id)a1 coinValue:(unsigned int)a2;
- (void)updateLabel:(id)a0;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void).cxx_destruct;

@end
