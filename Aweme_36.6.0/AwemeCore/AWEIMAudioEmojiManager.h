@class AWEIMEmoticonThemeModel, NSArray, NSDictionary, NSString, AWEIMEmoticonInfoModel;

@interface AWEIMAudioEmojiManager : NSObject <IESIMAudioEmojiManager>

@property (retain, nonatomic) AWEIMEmoticonThemeModel *audioEmojiThemeModel;
@property (retain, nonatomic) NSArray *audioEmojiList;
@property (retain, nonatomic) AWEIMEmoticonInfoModel *audioEmojiInfoModel;
@property (copy, nonatomic) NSDictionary *settingConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolveAudioEmojiList;
+ (id)reformatAudioEmojiModelArray:(id)a0;
+ (id)sharedInstance;

- (BOOL)enableAudioEmojiMsg;
- (void)prefetchDefaultAudioEmoji;
- (BOOL)enableAudioEmojiMsgWithMsg:(id)a0;
- (long long)audioEmojiMaxRedDotGuideCount;
- (BOOL)isAudioEmojiPlayId:(id)a0;
- (void)trackAudioEmojiPlayWithConversation:(id)a0 enterMethod:(id)a1 enterFrom:(id)a2 emoticon:(id)a3;
- (id)emoticonModelWithAudioEmojiMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
