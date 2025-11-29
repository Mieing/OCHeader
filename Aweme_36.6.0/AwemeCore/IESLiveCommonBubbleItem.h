@class HTSLiveCommonBubble, NSString, UIView;

@interface IESLiveCommonBubbleItem : NSObject

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *itemView;
@property (retain, nonatomic) HTSLiveCommonBubble *bubble;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ viewBlock;

- (void).cxx_destruct;
- (id)init;

@end
