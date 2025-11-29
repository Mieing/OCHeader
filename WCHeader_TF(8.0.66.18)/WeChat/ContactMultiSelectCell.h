@class UIImageView, UIColor;

@interface ContactMultiSelectCell : MMTableViewCell

@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isSelectedInRoomContact;
@property (nonatomic) BOOL isCheckBoxHiddenInEditing;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIColor *selectedColor;

+ (void)makeEditingCell:(id)a0 selected:(BOOL)a1 itemView:(id)a2;

- (void)prepareForReuse;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentLeftMargin;
- (void)changeSelectdStatus:(BOOL)a0;
- (void)changeRoomContactSelectedStatus:(BOOL)a0;
- (void)changeDisableStatus:(BOOL)a0;
- (void)updateImageView;
- (void)changeEditingStatus:(BOOL)a0;
- (void)changeHideCheckBoxInEditing:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)changeSelectImageViewY:(double)a0;
- (void).cxx_destruct;

@end
