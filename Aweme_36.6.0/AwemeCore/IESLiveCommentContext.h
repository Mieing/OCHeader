@class NSString, NSMutableDictionary, IESLiveCommentStructureContent, HTSLiveFixedChatSyncData, NSAttributedString, NSNumber;

@interface IESLiveCommentContext : NSObject

@property (copy, nonatomic) NSString *contextId;
@property (nonatomic) double contextStartTime;
@property (nonatomic) double currentStateTime;
@property (copy, nonatomic) NSString *localLogId;
@property (nonatomic) long long contextType;
@property (nonatomic) long long commentType;
@property (nonatomic) long long enterSource;
@property (copy, nonatomic) NSString *requestSource;
@property (nonatomic) unsigned long long exitMethod;
@property (nonatomic) long long draftSource;
@property (retain, nonatomic) id sendObject;
@property (copy, nonatomic) NSString *plainText;
@property (retain, nonatomic) NSAttributedString *displayedText;
@property (nonatomic) BOOL disableTrackSendSuccess;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (copy, nonatomic) NSString *voiceToTextResult;
@property (retain, nonatomic) IESLiveCommentStructureContent *structureContent;
@property (nonatomic) long long inputToSendDuration;
@property (copy, nonatomic) NSString *interactiveEmojiDisplayName;
@property (nonatomic) long long emojiID;
@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) int screenChatStyle;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (nonatomic) unsigned long long publicScreenType;
@property (nonatomic) long long whisperType;
@property (nonatomic) BOOL isWhisperComment;
@property (copy, nonatomic) NSString *replyWhisperMessageId;
@property (copy, nonatomic) NSString *toWhisperUserId;
@property (nonatomic) BOOL isQuickComment;
@property (copy, nonatomic) NSString *replyAndPinMessageId;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *originComment;
@property (retain, nonatomic) id unusedCommentIntentionsData;
@property (retain, nonatomic) NSMutableDictionary *extraDataDic;
@property (nonatomic) BOOL shouldShowLimitCommentPanelConfig;
@property (retain, nonatomic) HTSLiveFixedChatSyncData *limitPanelData;

+ (long long)stateScoreWithEnum:(long long)a0;
+ (id)commentTypeStringWithEnum:(long long)a0;
+ (id)stateStringWithEnum:(long long)a0;

- (id)initWithState:(long long)a0 enterSource:(long long)a1 type:(long long)a2;
- (void)monitorCommentUserAction;
- (void)logStateChange;
- (void).cxx_destruct;
- (void)dealloc;

@end
