@class UIFont, NSString, UIStackView, UIColor;

@interface IESLiveRoomProfileScrollableLabel : UILabel

@property (retain, nonatomic) UIStackView *labelsContainerStackView;
@property (retain, nonatomic) NSString *scrollableTextV2;
@property (retain, nonatomic) UIFont *scrollableFont;
@property (retain, nonatomic) UIColor *scrollableTextColor;

+ (id)labelWithText:(id)a0 font:(id)a1 textColor:(id)a2;
+ (id)charStringArrayWithSourceString:(id)a0;

- (void)playAnimationWithNewText:(id)a0 duration:(double)a1;
- (id)initWithText:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)updateLabelsContainerStackViewWithText:(id)a0;
- (void)textChangeAnimationForLabel:(id)a0 fromOldText:(id)a1 toNewText:(id)a2 duration:(double)a3;
- (void).cxx_destruct;
- (void)updateText:(id)a0;

@end
