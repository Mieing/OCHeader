@interface EmoticonBoardViewConfig : NSObject

@property (nonatomic) BOOL showSearchEmoji;
@property (nonatomic) BOOL showRecommendEmoji;
@property (nonatomic) BOOL showQQEmoji;
@property (nonatomic) BOOL showCustomEmoticon;
@property (nonatomic) BOOL showCameraEmoticon;
@property (nonatomic) BOOL showStoreEmoticon;
@property (nonatomic) BOOL showGameEmoticon;
@property (nonatomic) BOOL showAddCustomEmoticon;
@property (nonatomic) BOOL showAddCameraEmoticon;
@property (nonatomic) unsigned long long currentConfigCases;
@property (nonatomic) BOOL showQQEmojiSendButton;

- (id)init;
- (void)quickConfigureTab;
- (void)quickConfigureTabWithCases:(unsigned long long)a0;

@end
