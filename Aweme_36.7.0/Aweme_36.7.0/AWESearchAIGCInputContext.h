@class NSString, NSNumber, NSDictionary;

@interface AWESearchAIGCInputContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *inputQuery;
@property (retain, nonatomic) NSNumber *inputMode;
@property (retain, nonatomic) NSDictionary *voiceAsrExtra;
@property (nonatomic) BOOL enableDeepSeekMode;
@property (nonatomic) BOOL isSevenSplitScreen;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) BOOL shouldHookDeepThinkLongPress;
@property (nonatomic) BOOL isSplitVisonSearchMode;
@property (nonatomic) BOOL ignoreDarkMode;
@property (nonatomic) BOOL autoOpenKeyboard;
@property (nonatomic) BOOL showFlashAnimation;
@property (nonatomic) BOOL resetEditState;
@property (nonatomic) BOOL isPadSplitting;
@property (nonatomic) BOOL enableAINote;
@property (copy, nonatomic) NSString *videoAuthorUserId;
@property (copy, nonatomic) id /* block */ onAINoteButtonClicked;
@property (copy, nonatomic) NSString *conversationThinkMode;

- (void).cxx_destruct;

@end
