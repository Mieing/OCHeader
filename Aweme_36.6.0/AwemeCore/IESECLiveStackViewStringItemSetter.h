@class UILabel;

@interface IESECLiveStackViewStringItemSetter : IESECLiveStackViewBaseItemSetter

@property (retain, nonatomic) UILabel *label;
@property (readonly, nonatomic) id /* block */ font;
@property (readonly, nonatomic) id /* block */ textColor;
@property (readonly, nonatomic) id /* block */ ARGBColor;

- (id)iesec_getItem;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;

@end
