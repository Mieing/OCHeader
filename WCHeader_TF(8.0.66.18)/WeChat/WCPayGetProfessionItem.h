@class NSArray, NSString, UILabel, WCPayProfession;
@protocol WCPayGetProfessionItemDelegate;

@interface WCPayGetProfessionItem : WCBaseInfoItem <WCPayGetProfessionViewControllerDelegate>

@property (retain, nonatomic) UILabel *professionLabel;
@property (retain, nonatomic) WCPayProfession *profession;
@property (weak, nonatomic) id<WCPayGetProfessionItemDelegate> delegate;
@property (retain, nonatomic) NSArray *professions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProfession:(id)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)getProfessionViewController:(id)a0 didSelectedProfession:(id)a1;
- (id)professionString;
- (void).cxx_destruct;

@end
