@class WCFinderUserRelationshipTagLabel, WCFinderUserRelationshipModel;

@interface WCFinderUserRelationshipTag : UIView

@property (retain, nonatomic) WCFinderUserRelationshipTagLabel *leftTagLabel;
@property (retain, nonatomic) WCFinderUserRelationshipTagLabel *rightTagLabel;
@property (retain, nonatomic) WCFinderUserRelationshipModel *model;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;

+ (void)setupLeftUserTagLabel:(id)a0 rightUserTagLabel:(id)a1 withModel:(id)a2;
+ (struct CGSize { double x0; double x1; })tagSizeWithModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)shouldShowTag;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
