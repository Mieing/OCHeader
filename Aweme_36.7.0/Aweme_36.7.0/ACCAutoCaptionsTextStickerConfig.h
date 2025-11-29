@interface ACCAutoCaptionsTextStickerConfig : ACCCommonStickerConfig

@property (nonatomic) BOOL hideBubble;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ panBlock;

- (id)bubbleActionList;
- (void).cxx_destruct;
- (id)init;

@end
