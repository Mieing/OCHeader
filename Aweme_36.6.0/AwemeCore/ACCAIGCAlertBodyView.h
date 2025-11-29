@class NSString, UITextView, NSAttributedString;

@interface ACCAIGCAlertBodyView : UIView <DUXAlertDialogBodyView>

@property (retain, nonatomic) UITextView *bodyTextView;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)jumpToLoraSuiteLawPage;

@end
