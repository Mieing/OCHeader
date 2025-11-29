@class NSString, NSMutableArray, HTSLiveButtonImage;

@interface HTSLiveEmojiTab : IESLivePBBaseMessage

@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *tabText;
@property (retain, nonatomic) HTSLiveButtonImage *tabButton;
@property (nonatomic) BOOL hasTabButton;
@property (nonatomic) long long emojiType;
@property (retain, nonatomic) NSMutableArray *emojisArray;
@property (readonly, nonatomic) unsigned long long emojisArray_Count;

+ (id)descriptor;

@end
