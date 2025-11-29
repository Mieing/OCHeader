@class NSString, AWEIMFastReplyEditItemView, AWEIMFastReplyEditItemModel, AWEIMFastReplyEditAddView;

@interface AWEIMFastReplyEditItemCell : UICollectionViewCell <UITextFieldDelegate>

@property (retain, nonatomic) AWEIMFastReplyEditItemModel *model;
@property (retain, nonatomic) AWEIMFastReplyEditItemView *editItemView;
@property (retain, nonatomic) AWEIMFastReplyEditAddView *addView;
@property (copy, nonatomic) id /* block */ removeActionBlock;
@property (copy, nonatomic) id /* block */ addActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCellWithModel:(id)a0;
- (BOOL)isActivedTextField;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setupSubviews;

@end
