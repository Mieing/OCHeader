@class NSString;

@interface ACCTextStickerConfig : ACCCommonStickerConfig

@property (copy, nonatomic) NSString *textStickerId;
@property (nonatomic) long long textReadAction;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ readText;
@property (copy, nonatomic) id /* block */ editText;
@property (copy, nonatomic) id /* block */ selectTime;
@property (nonatomic) BOOL needBubble;
@property (nonatomic) BOOL disableSelectTime;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL isFromCoverEdit;

- (id)bubbleActionList;
- (id)textReadConfig;
- (id)selectTimeConfig;
- (id)editConfig;
- (void).cxx_destruct;
- (id)init;

@end
