@interface ACCVideoCommentStickerConfig : ACCCommonStickerConfig

@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ onSelectTimeCallback;

- (id)bubbleActionList;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOption:(unsigned long long)a0;

@end
