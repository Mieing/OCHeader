@class UIScrollView, YYLabel, NSString;

@interface AWEECOMIMMsgReferenceTextPreviewView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) YYLabel *messageTextLabel;
@property (copy, nonatomic) id /* block */ onPreviewClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textFont;
+ (id)textColor;

@end
