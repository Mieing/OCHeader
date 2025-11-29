@interface AWELeftSideBarEntranceCaptionBubbleShowNotificationParameterModel : AWELeftSideBarEntranceCaptionBubbleShowParameterModel <NSCopying>

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithComponentId:(id)a0 withBusinessId:(id)a1 withContent:(id)a2 withCompletion:(id /* block */)a3 withClickBlock:(id /* block */)a4 withDismissBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
