@class UIView;

@interface IESECLLViewHolder : NSObject {
    UIView *_cachedView;
}

@property (copy, nonatomic) id /* block */ viewLoader;
@property (readonly, nonatomic) UIView *view;

- (id)initWithViewLoader:(id /* block */)a0;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;

@end
