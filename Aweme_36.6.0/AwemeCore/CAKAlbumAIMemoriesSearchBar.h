@class UIStackView, UIView, NSArray, DUXTextField, NSString, UIImageView, NSMutableArray, UILabel;

@interface CAKAlbumAIMemoriesSearchBar : UIView <CAKAlbumSearchBarProtocol>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXTextField *textField;
@property (retain, nonatomic) UIView *leftActionContainerView;
@property (retain, nonatomic) NSMutableArray *leftActionsArray;
@property (retain, nonatomic) UIView *rightActionContainerView;
@property (retain, nonatomic) NSMutableArray *rightActionsArray;
@property (nonatomic) double maxScale;
@property (retain, nonatomic) UIStackView *presentStyleStackView;
@property (retain, nonatomic) UIImageView *presentStyleIconView;
@property (retain, nonatomic) UILabel *presentStyleLabel;
@property (readonly, copy, nonatomic) NSArray *leftActions;
@property (readonly, copy, nonatomic) NSArray *rightActions;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addSearchBarShadowViewForSearchBarTextField:(id)a0;

- (void)addRightAction:(id)a0;
- (void)addLeftAction:(id)a0;
- (void)removeAllRightAction;
- (void)removeAllLeftAction;
- (void)setupConstraintsForNormalStyle;
- (void)setupConstraintsForPresentStyle;
- (double)stackLengthWithActionsArray:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 searchBarStyle:(unsigned long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupViews;

@end
