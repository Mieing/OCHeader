@class NSString, IESLiveCommentStructureContent, NSArray;

@interface IESLiveCommentParamsModel : IESLiveDynamicModel

@property (readonly, copy, nonatomic) NSString *comment;
@property (retain, nonatomic) IESLiveCommentStructureContent *structureContent;
@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *commentColors;
@property (nonatomic) long long flowTime;
@property (nonatomic) long long agreeMsgId;
@property (nonatomic) long long emojiID;
@property (retain, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *interactiveEmojiDisplayName;
@property (nonatomic) long long whisperType;
@property (copy, nonatomic) NSString *replyWhisperMessageId;
@property (copy, nonatomic) NSString *toWhisperUserId;

- (id)initWithComment:(id)a0 type:(unsigned long long)a1;
- (id)initWithComment:(id)a0 type:(unsigned long long)a1 commentColors:(id)a2 flowTime:(long long)a3 agreeMsgId:(long long)a4;
- (void).cxx_destruct;

@end
