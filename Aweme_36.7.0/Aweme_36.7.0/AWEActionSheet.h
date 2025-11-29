@class UIColor, NSString, NSArray, UIView;
@protocol AWEActionSheetDelegate;

@interface AWEActionSheet : UIView

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *actionSheet;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (weak, nonatomic) id<AWEActionSheetDelegate> delegate;

- (void)onButtonClicked:(id)a0;
- (void)dismissByTapGesture;
- (void)didClickCencelButton:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)show;
- (void)doNothing;

@end
