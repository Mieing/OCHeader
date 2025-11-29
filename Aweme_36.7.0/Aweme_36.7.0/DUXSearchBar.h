@class NSString, DUXTextField, NSArray, UIView, NSMutableArray;

@interface DUXSearchBar : UIView <CAKAlbumSearchBarProtocol>

@property (readonly, nonatomic) DUXTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) DUXTextField *textField;
@property (retain, nonatomic) UIView *leftActionContainerView;
@property (retain, nonatomic) NSMutableArray *leftActionsArray;
@property (retain, nonatomic) UIView *rightActionContainerView;
@property (retain, nonatomic) NSMutableArray *rightActionsArray;
@property (nonatomic) double maxScale;
@property (readonly, copy, nonatomic) NSArray *leftActions;
@property (readonly, copy, nonatomic) NSArray *rightActions;
@property (nonatomic) unsigned long long enlargeType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (void)addRightAction:(id)a0;
- (void)addLeftAction:(id)a0;
- (void)removeAllRightAction;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)removeAllLeftAction;
- (double)stackLengthWithActionsArray:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)placeholder;
- (void)setPlaceholder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (void)setup;
- (void)setupViews;

@end
