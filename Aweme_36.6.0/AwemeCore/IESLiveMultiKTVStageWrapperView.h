@class NSString, UIView;

@interface IESLiveMultiKTVStageWrapperView : UIView <IESLiveInteractionAfkHandlable>

@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) BOOL removing;
@property (copy, nonatomic) id /* block */ disappearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithView:(id)a0 disappearBlock:(id /* block */)a1;

@end
