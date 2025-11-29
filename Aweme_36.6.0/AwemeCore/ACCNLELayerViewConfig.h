@interface ACCNLELayerViewConfig : ACCStickerConfig

@property (copy, nonatomic) id /* block */ editAction;
@property (nonatomic) BOOL needBubble;

+ (Class)bubbleClass;

- (id)bubbleActionList;
- (id)editActionConfig;
- (id)deleteActionConfig;
- (id)autoDismissPlaceholderConfig;
- (void).cxx_destruct;
- (id)init;

@end
