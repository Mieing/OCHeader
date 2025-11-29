@class AWEIMEmoticonThemeModel, NSMutableDictionary, AWEIMEmoticonModel, NSString, NSMutableArray, NSNumber;

@interface AWEIMGiphyMessageCreateContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *extraTrackParams;
@property (retain, nonatomic) NSMutableDictionary *extraSendContext;
@property (retain, nonatomic) NSMutableDictionary *extraContentDict;
@property (retain, nonatomic) NSMutableDictionary *extraLocalExt;
@property (retain, nonatomic) NSMutableDictionary *extraSyncedExt;
@property (retain, nonatomic) NSMutableArray *didSendBlocks;
@property (retain, nonatomic) AWEIMEmoticonModel *emoticon;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *theme;
@property (nonatomic) long long themeStyle;
@property (copy, nonatomic) NSString *quoteMsgID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *emojiFrom;
@property (nonatomic) BOOL trackEmojiClickSelf;
@property (copy, nonatomic) NSNumber *packageId;
@property (copy, nonatomic) NSNumber *themeVersion;
@property (copy, nonatomic) NSString *fromEmojiId;
@property (copy, nonatomic) NSString *authorSecUid;
@property (copy, nonatomic) NSString *emojiType;
@property (copy, nonatomic) id /* block */ preSendGiphyBlock;

- (void)addExtraSendContext:(id)a0;
- (void)addExtraTrackParams:(id)a0;
- (void)addExtraContentDict:(id)a0;
- (id)emojiID;
- (void)addExtraLocalExt:(id)a0;
- (void)addExtraSyncedExt:(id)a0;
- (void)addDidSendBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
