@class UITextView, NSString, UIColor, UIFont;

@interface IESGCPPlaceHolderTextView : UITextView

@property (retain, nonatomic) UITextView *iesgcp_placeHolderTextView;
@property (retain, nonatomic) NSString *iesgcp_placeHolder;
@property (retain, nonatomic) UIColor *iesgcp_placeHolderColor;
@property (retain, nonatomic) UIFont *iesgcp_placeHolderFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } iesgcp_placeHolderEdgeInsets;

- (void)iesgcp_showOrHidePlaceHolderTextView;
- (void).cxx_destruct;

@end
