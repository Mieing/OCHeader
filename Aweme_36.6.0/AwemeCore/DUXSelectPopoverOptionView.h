@class UIColor, DUXSelectPopoverOption, NSString, UILabel, DUXRadioBox;
@protocol DUXSelectPopoverOptionViewDelegate;

@interface DUXSelectPopoverOptionView : UIView <DUXSelectPopoverOptionSelectDelegate>

@property (retain, nonatomic) DUXSelectPopoverOption *option;
@property (weak, nonatomic) id<DUXSelectPopoverOptionViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) UIColor *optionColor;
@property (retain, nonatomic) UIColor *optionPressColor;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureFuction;
- (void)selectPopoverOptionSelectStateChanged:(id)a0;
- (double)selectPopoverOptionWidth;
- (id)initWithOption:(id)a0 withColor:(id)a1 withPressColor:(id)a2 type:(long long)a3;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;

@end
