@interface ACCHashtagEditStateBaseView : UIView

@property (nonatomic) BOOL isEditing;
@property (nonatomic) double keyboardHeight;

- (void)updateEditingState:(BOOL)a0 keyboardHeight:(double)a1;
- (void)updateLayout;

@end
