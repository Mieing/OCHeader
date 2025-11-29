@class UIImageView, CContact, ContactsItemView;

@interface MMMultiSelectContactsItemView : MMUIView

@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL isAllowMultiSelect;
@property (retain, nonatomic) UIImageView *checkMarkImgView;
@property (retain, nonatomic) ContactsItemView *contactItemView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andContact:(id)a1 andIsAllowMultiSelect:(BOOL)a2;
- (void)initView;
- (void)updateItemView:(id)a0 andContactState:(unsigned long long)a1;
- (id)getCheckMarkImageWithContactState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
