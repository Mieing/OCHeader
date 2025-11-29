@class UIView;

@interface IESECLiveStackViewSpecificViewItemSetter : IESECLiveStackViewBaseItemSetter

@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) id /* block */ size;

- (id)iesec_getItem;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
