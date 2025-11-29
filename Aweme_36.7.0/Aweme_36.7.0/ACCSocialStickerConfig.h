@interface ACCSocialStickerConfig : ACCCommonStickerConfig

@property (copy, nonatomic) id /* block */ editText;
@property (copy, nonatomic) id /* block */ selectTime;
@property (nonatomic) BOOL disableSelectTime;

- (id)bubbleActionList;
- (void).cxx_destruct;
- (id)init;

@end
