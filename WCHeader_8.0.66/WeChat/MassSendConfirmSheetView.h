@class NSArray, UIImageView, NSString, UIView, MMUILabel;

@interface MassSendConfirmSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeperatorLineView;
@property (retain, nonatomic) MMUILabel *contactDescLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *bottomSperatorLineView;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContacts:(id)a0;
- (void)initConfigs;
- (void)initView;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
