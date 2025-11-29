@class NSString, HTSLiveEmojiChatMessage;

@interface IESLiveEmojiChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy

@property (retain, nonatomic) HTSLiveEmojiChatMessage *emojiChatMessage;
@property (copy, nonatomic) NSString *emojiImageURL;

- (id)buildData;
- (long long)buildingMode;
- (void)AsyncBuildData:(id /* block */)a0;
- (BOOL)filterWithParams:(id)a0;
- (void).cxx_destruct;
- (BOOL)filter;

@end
