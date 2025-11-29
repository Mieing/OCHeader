@class UIImageView, NSMutableSet;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractEmojiFromCommand : IESLiveInteractEmojiBaseCommand

@property (copy, nonatomic) id /* block */ transitionAnimation;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *effectView;
@property (retain, nonatomic) NSMutableSet *occupiedUsers;

- (void)batchDispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)transitionAnimation:(id)a0 effect:(id)a1 completed:(id /* block */)a2;
- (void)dispatch:(id)a0 from:(struct CGPoint { double x0; double x1; })a1 to:(id)a2;
- (void)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)removeAnimation:(id)a0;

@end
