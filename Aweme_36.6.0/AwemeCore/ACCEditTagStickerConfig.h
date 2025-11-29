@interface ACCEditTagStickerConfig : ACCCommonStickerConfig

@property (copy, nonatomic) id /* block */ edit;
@property (copy, nonatomic) id /* block */ changeDirection;

- (id)bubbleActionList;
- (id)editConfig;
- (id)changeDirectionConfig;
- (void).cxx_destruct;
- (id)init;

@end
