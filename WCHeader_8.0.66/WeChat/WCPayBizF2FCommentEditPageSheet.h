@class NSString, UITextField, MMPageSheetAdapter;

@interface WCPayBizF2FCommentEditPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>

@property (retain, nonatomic) MMPageSheetAdapter *adapter;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) WCPayBizF2FCommentEditPageSheet *selfRetaining;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long maxLength;
@property (copy, nonatomic) id /* block */ onEdited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)show;
- (id)getTitleView;
- (id)getContentView;
- (void)textDidChange;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidDisappear:(id)a0;
- (void).cxx_destruct;

@end
