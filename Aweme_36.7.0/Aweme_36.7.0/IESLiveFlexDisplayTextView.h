@class IESLiveRichTextLabel, NSArray, UILabel, IESLiveFlexBackgroundImageView;
@protocol IESLiveFlexImage;

@interface IESLiveFlexDisplayTextView : UIView

@property (retain, nonatomic) IESLiveRichTextLabel *richTextLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESLiveFlexBackgroundImageView *flexBgImageView;
@property (retain, nonatomic) id<IESLiveFlexImage> bgFlexImage;
@property (retain, nonatomic) NSArray *pieces;
@property (copy, nonatomic) id /* block */ textUpdateBlock;

- (void)setUI;
- (void)setImage:(id)a0 flexSetting:(id)a1 textSetting:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
