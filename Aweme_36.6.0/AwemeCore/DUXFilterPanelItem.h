@class NSString, NSArray, UILabel, UIView;

@interface DUXFilterPanelItem : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *filterContainerView;
@property (nonatomic) double width;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSArray *itemAtoms;
@property (nonatomic) long long itemUse;
@property (nonatomic) long long componentCount;
@property (nonatomic) double itemNameAtomsPadding;
@property (nonatomic) unsigned long long enlargeType;

+ (id)filterPanelItemWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemName:(id)a1 itemAtoms:(id)a2 itemUse:(long long)a3 componentCount:(long long)a4;

- (void)updateArrangedFilterWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
