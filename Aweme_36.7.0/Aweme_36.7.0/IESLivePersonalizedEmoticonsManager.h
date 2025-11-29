@class NSArray, NSMutableDictionary, IESLiveEmoticonModel, NSString;
@protocol IESLiveEmoticonResource;

@interface IESLivePersonalizedEmoticonsManager : NSObject

@property (retain, nonatomic) id<IESLiveEmoticonResource> mainEmoticonResource;
@property (retain, nonatomic) NSMutableDictionary *personalizedEmoticonModelsDic;
@property (retain, nonatomic) IESLiveEmoticonModel *currentLowPcuGuideChatEmoji;
@property (copy, nonatomic) NSArray *sortedPersonalizedEmoticons;
@property (nonatomic) long long maxUseCount;
@property (retain, nonatomic) NSString *personalizedEmojiGroup;
@property (nonatomic) double paramA1;
@property (nonatomic) double paramA2;
@property (nonatomic) double paramB1;
@property (nonatomic) double paramB2;

+ (id)getPersonalizedEmojiGroup;

- (id)initWithDIContext:(id)a0;
- (void)emoticonClicked:(id)a0 trackParams:(id)a1;
- (void)trackSingleActivityEmojiShow:(id)a0 trackParams:(id)a1;
- (void)emoticonShowed:(id)a0;
- (void)updatePersonalizedEmoticonWith:(id)a0;
- (long long)removeExpiredDataAndFindMaxUseCount;
- (id)getSortedEmoji;
- (void)updatePersonalizedEmoticonServerScoreWith:(id)a0;
- (void)trackEmojiClick:(id)a0 trackParams:(id)a1;
- (id)emojiTypeWithModel:(id)a0;
- (void)trackQuickEmojiShow:(id)a0 trackParams:(id)a1;
- (double)localScore:(id)a0 atTimestamp:(double)a1;
- (double)serverScore:(id)a0;
- (void)calculateFinalScore:(id)a0 atTimestamp:(double)a1;
- (id)trackParamsWith:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
