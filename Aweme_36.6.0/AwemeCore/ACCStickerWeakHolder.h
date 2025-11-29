@class UIView;

@interface ACCStickerWeakHolder : NSObject

@property (readonly, weak, nonatomic) UIView *obj;
@property (copy, nonatomic) id /* block */ objBlock;

- (void).cxx_destruct;

@end
