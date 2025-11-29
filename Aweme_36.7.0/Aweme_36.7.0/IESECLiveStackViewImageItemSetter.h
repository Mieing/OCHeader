@class IESECUIImageView;

@interface IESECLiveStackViewImageItemSetter : IESECLiveStackViewBaseItemSetter

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (readonly, nonatomic) id /* block */ size;
@property (readonly, nonatomic) id /* block */ cornerRadius;

- (id)iesec_getItem;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0;
- (id)initWithImageName:(id)a0;

@end
