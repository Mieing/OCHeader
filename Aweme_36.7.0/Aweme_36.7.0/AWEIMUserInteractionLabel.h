@class UITapGestureRecognizer, NSString;

@interface AWEIMUserInteractionLabel : UILabel <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL tapEnable;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
